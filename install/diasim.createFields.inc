<?php
function _create_diasim_fields()
{
    $t = get_t();
    $fields = array();
    $fields['alsim_diasim_l1'] = getField_shortText($t,'field_alsim_diasim_l1','L1',1,255);
    $fields['alsim_diasim_l1_f'] = getField_shortText($t,'field_alsim_diasim_l1_f','L1 forecast',1,255);
    $fields['alsim_diasim_l2'] = getField_shortText($t,'field_alsim_diasim_l2','L2',1,255);
    $fields['alsim_diasim_l2_f'] = getField_shortText($t, 'field_alsim_diasim_l2_f', 'L2 forecast', 1,255);
    $fields['alsim_diasim_l3'] = getField_shortText($t, 'field_alsim_diasim_l3', 'L3', 1,255);
    $fields['alsim_diasim_l3_f'] = getField_shortText($t, 'field_alsim_diasim_l3_f', 'L3 forecast', 1,255);
    $fields['alsim_diasim_pupa'] = getField_shortText($t, 'field_alsim_diasim_pupa', 'Pupa', 1,255);
    $fields['alsim_diasim_pupa_f'] = getField_shortText($t, 'field_alsim_diasim_pupa_f', 'Pupa forecast', 1,255);
    $fields['alsim_diasim_male'] = getField_shortText($t, 'field_alsim_diasim_male', 'Male', 1,255);
    $fields['alsim_diasim_male_f'] = getField_shortText($t, 'field_alsim_diasim_male_f', 'Male forecast', 1,255);
    $fields['alsim_diasim_female'] = getField_shortText($t, 'field_alsim_diasim_female', 'Female', 1,255);
    $fields['alsim_diasim_female_f'] = getField_shortText($t, 'field_alsim_diasim_female_f', 'Female forecast', 1,255);
    return $fields;
 }

function installDiasimFields()
{
    foreach (_create_diasim_fields() as $field)
    {
        field_create_field($field);
    }
}
