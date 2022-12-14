/*
 * hw_def.h
 *
 *  Created on: Dec 6, 2020
 *      Author: baram
 */

#ifndef SRC_HW_HW_DEF_H_
#define SRC_HW_HW_DEF_H_


#include "def.h"
#include "sys.h"





#define _USE_HW_UART
#define      HW_UART_MAX_CH         2
#define      HW_CONSOLE_CH          _DEF_UART1
#define      HW_COMPORT_CH          _DEF_UART2


#define _USE_HW_CLI
#define      HW_CLI_CMD_LIST_MAX    16
#define      HW_CLI_CMD_NAME_MAX    16
#define      HW_CLI_LINE_HIS_MAX    4
#define      HW_CLI_LINE_BUF_MAX    64

#define _USE_HW_CMD
#define      HW_CMD_MAX_DATA_LENGTH (1024)



#endif /* SRC_HW_HW_DEF_H_ */
