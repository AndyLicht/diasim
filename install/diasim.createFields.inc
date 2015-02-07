<?php
function _create_diasim_fields()
{
    $t = get_t();
    $fields = array();
    $fields['alsim_diasim_l1'] = installHelper_getField_shortText($t,'field_alsim_diasim_l1','L1',1,255);
    $fields['alsim_diasim_l1_f'] = installHelper_getField_shortText($t,'field_alsim_diasim_l1_f','L1 forecast',1,255);
    $fields['alsim_diasim_l2'] = installHelper_getField_shortText($t,'field_alsim_diasim_l2','L2',1,255);
    $fields['alsim_diasim_l2_f'] = installHelper_getField_shortText($t, 'field_alsim_diasim_l2_f', 'L2 forecast', 1,255);
    $fields['alsim_diasim_l3'] = installHelper_getField_shortText($t, 'field_alsim_diasim_l3', 'L3', 1,255);
    $fields['alsim_diasim_l3_f'] = installHelper_getField_shortText($t, 'field_alsim_diasim_l3_f', 'L3 forecast', 1,255);
    $fields['alsim_diasim_pupa'] = installHelper_getField_shortText($t, 'field_alsim_diasim_pupa', 'Pupa', 1,255);
    $fields['alsim_diasim_pupa_f'] = installHelper_getField_shortText($t, 'field_alsim_diasim_pupa_f', 'Pupa forecast', 1,255);
    $fields['alsim_diasim_male'] = installHelper_getField_shortText($t, 'field_alsim_diasim_male', 'Male', 1,255);
    $fields['alsim_diasim_male_f'] = installHelper_getField_shortText($t, 'field_alsim_diasim_male_f', 'Male forecast', 1,255);
    $fields['alsim_diasim_female'] = installHelper_getField_shortText($t, 'field_alsim_diasim_female', 'Female', 1,255);
    $fields['alsim_diasim_female_f'] = installHelper_getField_shortText($t, 'field_alsim_diasim_female_f', 'Female forecast', 1,255);
    return $fields;
 }

function installDiasimFields()
{
    foreach (_create_diasim_fields() as $field)
    {
        field_create_field($field);
    }
}
