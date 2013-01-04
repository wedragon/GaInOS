#ifndef _OS_CFG_H_
#define _OS_CFG_H_
#include "Os.h"

#define cfgOS_MAX_IPL 7
#define cfgOS_MAX_PRIORITY 63
#define cfgOS_CONFORMANCE_CLASS BCC1
#define cfgOS_STATUS_LEVEL OS_STATUS_STANDARD
#define cfgOS_SCHEDULE_POLICY FULL_PREEMPTIVE_SCHEDULE
#define cfgOS_TASK_NUM 7


/* GaInOS Resource Configuration */
#define cfgOS_USE_RESOURCE STD_FALSE
#define cfgOS_RESOURCE_NUM 0


/* GaInOS Internal Resource Configuration */
#define cfgOS_USE_INTERNAL_RESOURCE STD_FALSE
#define cfgOS_INTERNAL_RESOURCE_NUM 0
#define cfgOS_TASK_WITH_IN_RES_NUM  0

#define cfgOS_ISR_USE_RES STD_FALSE

/* GaInOS Counter And Alarm Configuration */
#define cfgOS_USE_ALARM STD_TRUE
#define cfgOS_COUNTER_NUM 1
#define cfgOS_ALARM_NUM 3
#define cfgOS_SCHEDULE_TABLE_NUM 2

/*Default Macro Defines Which You Can Change form 0 to 1 to include the Hooks or Stack Usage Check for GaInOS*/
#define cfgOS_STACK_USAGE_CHECK 0
#define cfgOS_HOOK_IN_KERNEL 0
#define cfgOS_SHUT_DOWN_HOOK 0
#define cfgOS_START_UP_HOOK 0
#define cfgOS_ERROR_HOOK 0
#define cfgOS_PRE_TASK_HOOK 0
#define cfgOS_POST_TASK_HOOK 0
/* For MC9S12(X) */

typedef uint8_t OsCpuSrType;
typedef uint8_t OsCpuIplType;
#endif /* _OS_CFG_H_ */
