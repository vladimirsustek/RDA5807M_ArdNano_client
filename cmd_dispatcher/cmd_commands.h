#ifndef CMD_COMMANDS_H_INCLUDED
#define CMD_COMMANDS_H_INCLUDED

#include "cmd_defs.h"

/*** BASIC METHODS ***/
#define CMD_METHOD_SET "ST"
#define CMD_METHOD_GET "GT"
#define CMD_METHOD_DO  "DO"

/*** FM-RX RDA5807M SUPPORTED COMMANDS ***/

#define CMD_RDA5807M_INIT "INIT"
#define CMD_RDA5807M_MUTE "MUTE"
#define CMD_RDA5807M_RSSI "RSSI"
#define CMD_RDA5807M_VOLM "VOLM"
#define CMD_RDA5807M_FREQ "FREQ"
#define CMD_RDA5807M_RSET  "RSET"
#define CMD_RDA5807M_RDSR "RDSR"
#define CMD_RDA5807M_RDSS "RDSS"
#define CMD_RDA5807M_STRO "STRO"
#define CMD_RDA5807M_CHST "CHST"

#define CMD_RDA5807M_BLKA "BLKA"
#define CMD_RDA5807M_BLKB "BLKB"
#define CMD_RDA5807M_BLKC "BLKC"
#define CMD_RDA5807M_BLKD "BLKD"

#define CMD_RDA5807M_ERRA "ERRA"
#define CMD_RDA5807M_ERRB "ERRB"

#endif // CMD_COMMANDS_H_INCLUDED
