/**
 * @file Vpid.h
 * @author Sina Karvandi (sina@hyperdbg.org)
 * @brief VPID Headers
 * @details
 * @version 0.1
 * @date 2020-04-11
 * 
 * @copyright This project is released under the GNU Public License v3.
 * 
 */
#pragma once

//////////////////////////////////////////////////
//					Enums						//
//////////////////////////////////////////////////

/**
 * @brief INVVPID Enum
 * 
 */
typedef enum _INVVPID_ENUM
{
    INVVPID_INDIVIDUAL_ADDRESS               = 0x00000000,
    INVVPID_SINGLE_CONTEXT                   = 0x00000001,
    INVVPID_ALL_CONTEXT                      = 0x00000002,
    INVVPID_SINGLE_CONTEXT_RETAINING_GLOBALS = 0x00000003
} INVVPID_ENUM,
    *PINVVPID_ENUM;

//////////////////////////////////////////////////
//					Structures					//
//////////////////////////////////////////////////

//////////////////////////////////////////////////
//					Definitions					//
//////////////////////////////////////////////////

/**
 * @brief VPID Tag
 * 
 */
#define VPID_TAG 0x1

//////////////////////////////////////////////////
//					Functions					//
//////////////////////////////////////////////////

VOID
Invvpid_fn(INVVPID_ENUM Type, INVVPID_DESCRIPTOR * Descriptor);

VOID
InvvpidIndividualAddress_fn(UINT16 Vpid, UINT64 LinearAddress);

VOID
InvvpidSingleContext_fn(UINT16 Vpid);

VOID
InvvpidAllContexts_fn();

VOID
InvvpidSingleContextRetainingGlobals_fn(UINT16 Vpid);
