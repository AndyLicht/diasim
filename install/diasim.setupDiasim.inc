<?php

function setup_diasim_nodes()
{
    $sql = 'SELECT nid FROM {node} n WHERE n.type = :type';
    $result = db_query($sql, array(':type' => 'openweathermap'));
    
    foreach ($result as $node)
    {
        //Node laden
        $weathernode = node_load($node->nid);
        $title = 'DiaSim: '.$weathernode->field_ow_station['und'][0]['value'].' ('.$weathernode->field_ow_uuid['und'][0]['value'].')';
        //Node erzeugen
        $node = new stdClass();
        $node->title = $title;
        $node->type = 'alsim_diasim';
        $node = node_submit($node); // Prepare node for saving
        node_save($node);
        
        //in beiden Nodes einen ReferenzLink anlegen
        $query = new EntityFieldQuery;
        $query->entityCondition('entity_type', 'node')
            ->entityCondition('bundle', 'alsim_diasim')
            ->fieldCondition('title', 'value',$title ,'=');            
        $result = $query->execute();
        dpm($result['node']);
    }
}