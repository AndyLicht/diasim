<?php

function install_diasim()
{
    foreach (_diasim_installed_instances() as $instance)
    {
        field_create_instance($instance);
    }
}


function _diasim_installed_instances()
{
    $t = get_t();
    $instances = array();
    $instances['alsim_diasim_l1'] = getInstance_shortText($t,'field_alsim_diasim_l1','L1','alsim_diasim','node','L1');
    $instances['alsim_diasim_l1_f'] = getInstance_shortText($t,'field_alsim_diasim_l1_f','L1 forecaste','alsim_diasim','node','L1 forecaste');
    $instances['alsim_diasim_l2'] = getInstance_shortText($t,'field_alsim_diasim_l2','L2','alsim_diasim','node','L2');
    $instances['alsim_diasim_l2_f'] = getInstance_shortText($t,'field_alsim_diasim_l2_f','L2 forecaste','alsim_diasim','node','L2 forecaste');
    $instances['alsim_diasim_l3'] = getInstance_shortText($t,'field_alsim_diasim_l3','L3','alsim_diasim','node','L3');
    $instances['alsim_diasim_l3_f'] = getInstance_shortText($t,'field_alsim_diasim_l3_f','L3 forecaste','alsim_diasim','node','L3 forecaste');
    $instances['alsim_diasim_pupa'] = getInstance_shortText($t,'field_alsim_diasim_pupa','Pupa','alsim_diasim','node','Pupa');
    $instances['alsim_diasim_pupa_f'] = getInstance_shortText($t,'field_alsim_diasim_pupa_f','Pupa forecaste','alsim_diasim','node','Pupa forecaste');
    $instances['alsim_diasim_male'] = getInstance_shortText($t,'field_alsim_diasim_male','Male','alsim_diasim','node','Male');
    $instances['alsim_diasim_male_f'] = getInstance_shortText($t,'field_alsim_diasim_male_f','Male forecaste','alsim_diasim','node','Male forecaste');
    $instances['alsim_diasim_female'] = getInstance_shortText($t,'field_alsim_diasim_female','Female','alsim_diasim','node','Female');
    $instances['alsim_diasim_female_f'] = getInstance_shortText($t,'field_alsim_diasim_female_f','Female forecaste','alsim_diasim','node','Female forecaste');
    return $instances;
}


