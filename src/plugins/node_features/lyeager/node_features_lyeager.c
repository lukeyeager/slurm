#include "slurm/slurm.h"

const char plugin_name[]      = "node_features lyeager plugin";
const char plugin_type[]      = "node_features/lyeager";
const uint32_t plugin_version = SLURM_VERSION_NUMBER;

extern int init(void)
{
	return SLURM_SUCCESS;
}

extern int fini(void)
{
	return SLURM_SUCCESS;
}

extern bool node_features_p_changeable_feature(char *feature)
{
	return false;
}

extern int node_features_p_reconfig(void)
{
	return SLURM_SUCCESS;
}

extern uint32_t node_features_p_boot_time(void)
{
	return 10*60;
}

extern int node_features_p_get_node(char *node_list)
{
	return SLURM_SUCCESS;
}

extern int node_features_p_job_valid(char *job_features)
{
	return SLURM_SUCCESS;
}

extern char *node_features_p_job_xlate(char *job_features)
{
	return NULL;
}

extern bitstr_t *node_features_g_get_node_bitmap(void)
{
	return NULL;
}

extern bool node_features_p_node_power(void)
{
	return false;
}

extern void node_features_p_node_state(char **avail_modes, char **current_mode)
{
	return;
}

extern bool node_features_g_node_update_valid(void *node_ptr, update_node_msg_t *update_node_msg)
{
	return true;
}

extern uint32_t node_features_g_reboot_weight(void)
{
	return (INFINITE - 1);
}

extern char *node_features_p_node_xlate(char *new_features, char *orig_features,
		char *avail_features, int node_inx)
{
	return orig_features; // FIXME merge with new features, at least
}

extern char *node_features_p_node_xlate2(char *new_features)
{
	return new_features;
}

extern void node_features_p_step_config(bool mem_sort, bitstr_t *numa_bitmap)
{
	return;
}

extern bool node_features_p_user_update(uid_t uid)
{
	return true;
}
