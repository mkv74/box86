#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
#error meh!
#endif

//GOS(xcb_randr_add_output_mode, 
//GOS(xcb_randr_add_output_mode_checked, 
//GOS(xcb_randr_change_output_property, 
//GOS(xcb_randr_change_output_property_checked, 
//GOS(xcb_randr_change_output_property_data, 
//GOS(xcb_randr_change_output_property_data_end, 
//GOS(xcb_randr_change_output_property_data_length, 
//GOS(xcb_randr_change_output_property_sizeof, 
//GOS(xcb_randr_change_provider_property, 
//GOS(xcb_randr_change_provider_property_checked, 
//GOS(xcb_randr_change_provider_property_data, 
//GOS(xcb_randr_change_provider_property_data_end, 
//GOS(xcb_randr_change_provider_property_data_length, 
//GOS(xcb_randr_change_provider_property_sizeof, 
//GOS(xcb_randr_configure_output_property, 
//GOS(xcb_randr_configure_output_property_checked, 
//GOS(xcb_randr_configure_output_property_sizeof, 
//GOS(xcb_randr_configure_output_property_values, 
//GOS(xcb_randr_configure_output_property_values_end, 
//GOS(xcb_randr_configure_output_property_values_length, 
//GOS(xcb_randr_configure_provider_property, 
//GOS(xcb_randr_configure_provider_property_checked, 
//GOS(xcb_randr_configure_provider_property_sizeof, 
//GOS(xcb_randr_configure_provider_property_values, 
//GOS(xcb_randr_configure_provider_property_values_end, 
//GOS(xcb_randr_configure_provider_property_values_length, 
//GOS(xcb_randr_create_mode, 
//GOS(xcb_randr_create_mode_reply, 
//GOS(xcb_randr_create_mode_sizeof, 
//GOS(xcb_randr_create_mode_unchecked, 
//GOS(xcb_randr_crtc_change_end, 
//GOS(xcb_randr_crtc_change_next, 
//GOS(xcb_randr_crtc_end, 
//GOS(xcb_randr_crtc_next, 
//GOS(xcb_randr_delete_monitor, 
//GOS(xcb_randr_delete_monitor_checked, 
//GOS(xcb_randr_delete_output_mode, 
//GOS(xcb_randr_delete_output_mode_checked, 
//GOS(xcb_randr_delete_output_property, 
//GOS(xcb_randr_delete_output_property_checked, 
//GOS(xcb_randr_delete_provider_property, 
//GOS(xcb_randr_delete_provider_property_checked, 
//GOS(xcb_randr_destroy_mode, 
//GOS(xcb_randr_destroy_mode_checked, 
//GOS(xcb_randr_get_crtc_gamma, 
//GOS(xcb_randr_get_crtc_gamma_blue, 
//GOS(xcb_randr_get_crtc_gamma_blue_end, 
//GOS(xcb_randr_get_crtc_gamma_blue_length, 
//GOS(xcb_randr_get_crtc_gamma_green, 
//GOS(xcb_randr_get_crtc_gamma_green_end, 
//GOS(xcb_randr_get_crtc_gamma_green_length, 
//GOS(xcb_randr_get_crtc_gamma_red, 
//GOS(xcb_randr_get_crtc_gamma_red_end, 
//GOS(xcb_randr_get_crtc_gamma_red_length, 
//GOS(xcb_randr_get_crtc_gamma_reply, 
//GOS(xcb_randr_get_crtc_gamma_size, 
//GOS(xcb_randr_get_crtc_gamma_sizeof, 
//GOS(xcb_randr_get_crtc_gamma_size_reply, 
//GOS(xcb_randr_get_crtc_gamma_size_unchecked, 
//GOS(xcb_randr_get_crtc_gamma_unchecked, 
GOS(xcb_randr_get_crtc_info, pFEpppu)
//GOS(xcb_randr_get_crtc_info_outputs, 
//GOS(xcb_randr_get_crtc_info_outputs_end, 
//GOS(xcb_randr_get_crtc_info_outputs_length, 
//GOS(xcb_randr_get_crtc_info_possible, 
//GOS(xcb_randr_get_crtc_info_possible_end, 
//GOS(xcb_randr_get_crtc_info_possible_length, 
GO(xcb_randr_get_crtc_info_reply, pFpup)
//GOS(xcb_randr_get_crtc_info_sizeof, 
GOS(xcb_randr_get_crtc_info_unchecked, pFEpppu)
//GOS(xcb_randr_get_crtc_transform, 
//GOS(xcb_randr_get_crtc_transform_current_filter_name, 
//GOS(xcb_randr_get_crtc_transform_current_filter_name_end, 
//GOS(xcb_randr_get_crtc_transform_current_filter_name_length, 
//GOS(xcb_randr_get_crtc_transform_current_params, 
//GOS(xcb_randr_get_crtc_transform_current_params_end, 
//GOS(xcb_randr_get_crtc_transform_current_params_length, 
//GOS(xcb_randr_get_crtc_transform_pending_filter_name, 
//GOS(xcb_randr_get_crtc_transform_pending_filter_name_end, 
//GOS(xcb_randr_get_crtc_transform_pending_filter_name_length, 
//GOS(xcb_randr_get_crtc_transform_pending_params, 
//GOS(xcb_randr_get_crtc_transform_pending_params_end, 
//GOS(xcb_randr_get_crtc_transform_pending_params_length, 
//GOS(xcb_randr_get_crtc_transform_reply, 
//GOS(xcb_randr_get_crtc_transform_sizeof, 
//GOS(xcb_randr_get_crtc_transform_unchecked, 
//GOS(xcb_randr_get_monitors, 
//GOS(xcb_randr_get_monitors_monitors_iterator, 
//GOS(xcb_randr_get_monitors_monitors_length, 
//GOS(xcb_randr_get_monitors_reply, 
//GOS(xcb_randr_get_monitors_sizeof, 
//GOS(xcb_randr_get_monitors_unchecked, 
//GOS(xcb_randr_get_output_info, 
//GOS(xcb_randr_get_output_info_clones, 
//GOS(xcb_randr_get_output_info_clones_end, 
//GOS(xcb_randr_get_output_info_clones_length, 
//GOS(xcb_randr_get_output_info_crtcs, 
//GOS(xcb_randr_get_output_info_crtcs_end, 
//GOS(xcb_randr_get_output_info_crtcs_length, 
//GOS(xcb_randr_get_output_info_modes, 
//GOS(xcb_randr_get_output_info_modes_end, 
//GOS(xcb_randr_get_output_info_modes_length, 
//GOS(xcb_randr_get_output_info_name, 
//GOS(xcb_randr_get_output_info_name_end, 
//GOS(xcb_randr_get_output_info_name_length, 
//GOS(xcb_randr_get_output_info_reply, 
//GOS(xcb_randr_get_output_info_sizeof, 
//GOS(xcb_randr_get_output_info_unchecked, 
//GOS(xcb_randr_get_output_primary, 
//GOS(xcb_randr_get_output_primary_reply, 
//GOS(xcb_randr_get_output_primary_unchecked, 
//GOS(xcb_randr_get_output_property, 
//GOS(xcb_randr_get_output_property_data, 
//GOS(xcb_randr_get_output_property_data_end, 
//GOS(xcb_randr_get_output_property_data_length, 
//GOS(xcb_randr_get_output_property_reply, 
//GOS(xcb_randr_get_output_property_sizeof, 
//GOS(xcb_randr_get_output_property_unchecked, 
//GOS(xcb_randr_get_panning, 
//GOS(xcb_randr_get_panning_reply, 
//GOS(xcb_randr_get_panning_unchecked, 
//GOS(xcb_randr_get_provider_info, 
//GOS(xcb_randr_get_provider_info_associated_capability, 
//GOS(xcb_randr_get_provider_info_associated_capability_end, 
//GOS(xcb_randr_get_provider_info_associated_capability_length, 
//GOS(xcb_randr_get_provider_info_associated_providers, 
//GOS(xcb_randr_get_provider_info_associated_providers_end, 
//GOS(xcb_randr_get_provider_info_associated_providers_length, 
//GOS(xcb_randr_get_provider_info_crtcs, 
//GOS(xcb_randr_get_provider_info_crtcs_end, 
//GOS(xcb_randr_get_provider_info_crtcs_length, 
//GOS(xcb_randr_get_provider_info_name, 
//GOS(xcb_randr_get_provider_info_name_end, 
//GOS(xcb_randr_get_provider_info_name_length, 
//GOS(xcb_randr_get_provider_info_outputs, 
//GOS(xcb_randr_get_provider_info_outputs_end, 
//GOS(xcb_randr_get_provider_info_outputs_length, 
//GOS(xcb_randr_get_provider_info_reply, 
//GOS(xcb_randr_get_provider_info_sizeof, 
//GOS(xcb_randr_get_provider_info_unchecked, 
//GOS(xcb_randr_get_provider_property, 
//GOS(xcb_randr_get_provider_property_data, 
//GOS(xcb_randr_get_provider_property_data_end, 
//GOS(xcb_randr_get_provider_property_data_length, 
//GOS(xcb_randr_get_provider_property_reply, 
//GOS(xcb_randr_get_provider_property_sizeof, 
//GOS(xcb_randr_get_provider_property_unchecked, 
//GOS(xcb_randr_get_providers, 
//GOS(xcb_randr_get_providers_providers, 
//GOS(xcb_randr_get_providers_providers_end, 
//GOS(xcb_randr_get_providers_providers_length, 
//GOS(xcb_randr_get_providers_reply, 
//GOS(xcb_randr_get_providers_sizeof, 
//GOS(xcb_randr_get_providers_unchecked, 
//GOS(xcb_randr_get_screen_info, 
//GOS(xcb_randr_get_screen_info_rates_iterator, 
//GOS(xcb_randr_get_screen_info_rates_length, 
//GOS(xcb_randr_get_screen_info_reply, 
//GOS(xcb_randr_get_screen_info_sizeof, 
//GOS(xcb_randr_get_screen_info_sizes, 
//GOS(xcb_randr_get_screen_info_sizes_iterator, 
//GOS(xcb_randr_get_screen_info_sizes_length, 
//GOS(xcb_randr_get_screen_info_unchecked, 
//GOS(xcb_randr_get_screen_resources, 
//GOS(xcb_randr_get_screen_resources_crtcs, 
//GOS(xcb_randr_get_screen_resources_crtcs_end, 
//GOS(xcb_randr_get_screen_resources_crtcs_length, 
GOS(xcb_randr_get_screen_resources_current, pFEppu)
//GOS(xcb_randr_get_screen_resources_current_crtcs, 
//GOS(xcb_randr_get_screen_resources_current_crtcs_end, 
//GOS(xcb_randr_get_screen_resources_current_crtcs_length, 
//GOS(xcb_randr_get_screen_resources_current_modes, 
//GOS(xcb_randr_get_screen_resources_current_modes_iterator, 
//GOS(xcb_randr_get_screen_resources_current_modes_length, 
//GOS(xcb_randr_get_screen_resources_current_names, 
//GOS(xcb_randr_get_screen_resources_current_names_end, 
//GOS(xcb_randr_get_screen_resources_current_names_length, 
//GOS(xcb_randr_get_screen_resources_current_outputs, 
//GOS(xcb_randr_get_screen_resources_current_outputs_end, 
//GOS(xcb_randr_get_screen_resources_current_outputs_length, 
//GOS(xcb_randr_get_screen_resources_current_reply, 
//GOS(xcb_randr_get_screen_resources_current_sizeof, 
//GOS(xcb_randr_get_screen_resources_current_unchecked, 
//GOS(xcb_randr_get_screen_resources_modes, 
//GOS(xcb_randr_get_screen_resources_modes_iterator, 
//GOS(xcb_randr_get_screen_resources_modes_length, 
//GOS(xcb_randr_get_screen_resources_names, 
//GOS(xcb_randr_get_screen_resources_names_end, 
//GOS(xcb_randr_get_screen_resources_names_length, 
GOS(xcb_randr_get_screen_resources_outputs, pFEppu)
//GOS(xcb_randr_get_screen_resources_outputs_end, 
//GOS(xcb_randr_get_screen_resources_outputs_length, 
//GOS(xcb_randr_get_screen_resources_reply, 
//GOS(xcb_randr_get_screen_resources_sizeof, 
//GOS(xcb_randr_get_screen_resources_unchecked, 
//GOS(xcb_randr_get_screen_size_range, 
//GOS(xcb_randr_get_screen_size_range_reply, 
//GOS(xcb_randr_get_screen_size_range_unchecked, 
DATA(xcb_randr_id, 8)
//GOS(xcb_randr_list_output_properties, 
//GOS(xcb_randr_list_output_properties_atoms, 
//GOS(xcb_randr_list_output_properties_atoms_end, 
//GOS(xcb_randr_list_output_properties_atoms_length, 
//GOS(xcb_randr_list_output_properties_reply, 
//GOS(xcb_randr_list_output_properties_sizeof, 
//GOS(xcb_randr_list_output_properties_unchecked, 
//GOS(xcb_randr_list_provider_properties, 
//GOS(xcb_randr_list_provider_properties_atoms, 
//GOS(xcb_randr_list_provider_properties_atoms_end, 
//GOS(xcb_randr_list_provider_properties_atoms_length, 
//GOS(xcb_randr_list_provider_properties_reply, 
//GOS(xcb_randr_list_provider_properties_sizeof, 
//GOS(xcb_randr_list_provider_properties_unchecked, 
//GOS(xcb_randr_mode_end, 
//GOS(xcb_randr_mode_info_end, 
//GOS(xcb_randr_mode_info_next, 
//GOS(xcb_randr_mode_next, 
//GOS(xcb_randr_monitor_info_end, 
//GOS(xcb_randr_monitor_info_next, 
//GOS(xcb_randr_monitor_info_outputs, 
//GOS(xcb_randr_monitor_info_outputs_end, 
//GOS(xcb_randr_monitor_info_outputs_length, 
//GOS(xcb_randr_monitor_info_sizeof, 
//GOS(xcb_randr_notify_data_end, 
//GOS(xcb_randr_notify_data_next, 
//GOS(xcb_randr_output_change_end, 
//GOS(xcb_randr_output_change_next, 
//GOS(xcb_randr_output_end, 
//GOS(xcb_randr_output_next, 
//GOS(xcb_randr_output_property_end, 
//GOS(xcb_randr_output_property_next, 
//GOS(xcb_randr_provider_change_end, 
//GOS(xcb_randr_provider_change_next, 
//GOS(xcb_randr_provider_end, 
//GOS(xcb_randr_provider_next, 
//GOS(xcb_randr_provider_property_end, 
//GOS(xcb_randr_provider_property_next, 
//GOS(xcb_randr_query_output_property, 
//GOS(xcb_randr_query_output_property_reply, 
//GOS(xcb_randr_query_output_property_sizeof, 
//GOS(xcb_randr_query_output_property_unchecked, 
//GOS(xcb_randr_query_output_property_valid_values, 
//GOS(xcb_randr_query_output_property_valid_values_end, 
//GOS(xcb_randr_query_output_property_valid_values_length, 
//GOS(xcb_randr_query_provider_property, 
//GOS(xcb_randr_query_provider_property_reply, 
//GOS(xcb_randr_query_provider_property_sizeof, 
//GOS(xcb_randr_query_provider_property_unchecked, 
//GOS(xcb_randr_query_provider_property_valid_values, 
//GOS(xcb_randr_query_provider_property_valid_values_end, 
//GOS(xcb_randr_query_provider_property_valid_values_length, 
//GOS(xcb_randr_query_version, 
//GOS(xcb_randr_query_version_reply, 
//GOS(xcb_randr_query_version_unchecked, 
//GOS(xcb_randr_refresh_rates_end, 
//GOS(xcb_randr_refresh_rates_next, 
//GOS(xcb_randr_refresh_rates_rates, 
//GOS(xcb_randr_refresh_rates_rates_end, 
//GOS(xcb_randr_refresh_rates_rates_length, 
//GOS(xcb_randr_refresh_rates_sizeof, 
//GOS(xcb_randr_resource_change_end, 
//GOS(xcb_randr_resource_change_next, 
//GOS(xcb_randr_screen_size_end, 
//GOS(xcb_randr_screen_size_next, 
//GOS(xcb_randr_select_input, 
//GOS(xcb_randr_select_input_checked, 
//GOS(xcb_randr_set_crtc_config, 
//GOS(xcb_randr_set_crtc_config_reply, 
//GOS(xcb_randr_set_crtc_config_sizeof, 
//GOS(xcb_randr_set_crtc_config_unchecked, 
//GOS(xcb_randr_set_crtc_gamma, 
//GOS(xcb_randr_set_crtc_gamma_blue, 
//GOS(xcb_randr_set_crtc_gamma_blue_end, 
//GOS(xcb_randr_set_crtc_gamma_blue_length, 
//GOS(xcb_randr_set_crtc_gamma_checked, 
//GOS(xcb_randr_set_crtc_gamma_green, 
//GOS(xcb_randr_set_crtc_gamma_green_end, 
//GOS(xcb_randr_set_crtc_gamma_green_length, 
//GOS(xcb_randr_set_crtc_gamma_red, 
//GOS(xcb_randr_set_crtc_gamma_red_end, 
//GOS(xcb_randr_set_crtc_gamma_red_length, 
//GOS(xcb_randr_set_crtc_gamma_sizeof, 
//GOS(xcb_randr_set_crtc_transform, 
//GOS(xcb_randr_set_crtc_transform_checked, 
//GOS(xcb_randr_set_crtc_transform_filter_name, 
//GOS(xcb_randr_set_crtc_transform_filter_name_end, 
//GOS(xcb_randr_set_crtc_transform_filter_name_length, 
//GOS(xcb_randr_set_crtc_transform_filter_params, 
//GOS(xcb_randr_set_crtc_transform_filter_params_end, 
//GOS(xcb_randr_set_crtc_transform_filter_params_length, 
//GOS(xcb_randr_set_crtc_transform_sizeof, 
//GOS(xcb_randr_set_monitor, 
//GOS(xcb_randr_set_monitor_checked, 
//GOS(xcb_randr_set_monitor_monitorinfo, 
//GOS(xcb_randr_set_monitor_sizeof, 
//GOS(xcb_randr_set_output_primary, 
//GOS(xcb_randr_set_output_primary_checked, 
//GOS(xcb_randr_set_panning, 
//GOS(xcb_randr_set_panning_reply, 
//GOS(xcb_randr_set_panning_unchecked, 
//GOS(xcb_randr_set_provider_offload_sink, 
//GOS(xcb_randr_set_provider_offload_sink_checked, 
//GOS(xcb_randr_set_provider_output_source, 
//GOS(xcb_randr_set_provider_output_source_checked, 
//GOS(xcb_randr_set_screen_config, 
//GOS(xcb_randr_set_screen_config_reply, 
//GOS(xcb_randr_set_screen_config_unchecked, 
//GOS(xcb_randr_set_screen_size, 
//GOS(xcb_randr_set_screen_size_checked, 