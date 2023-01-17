/**
 * @file pch.h
 * @author Sina Karvandi (sina@hyperdbg.org)
 * @brief Pre-compiled headers for debugger
 * @details
 * @version 0.2
 * @date 2023-01-15
 *
 * @copyright This project is released under the GNU Public License v3.
 *
 */
#include <ntifs.h>
#include <ntddk.h>
#include <wdf.h>
#include <wdm.h>
#include <ntstrsafe.h>
#include <Windef.h>

//
// Scope definitions
//
#define SCRIPT_ENGINE_KERNEL_MODE
#define HYPERDBG_KERNEL_MODE

//
// Import Configuration
//
#include "Configuration.h"

//
// HyperDbg SDK headers
//
#include "SDK/HyperDbgSdk.h"
#include "../../hprdbghv/header/common/RefactorTempStructs.h" // should be removed

//
// Import HyperLog Module
//
#include "SDK/Modules/HyperLog.h"
#include "SDK/Imports/HyperDbgHyperLogImports.h"
#include "SDK/Imports/HyperDbgHyperLogIntrinsics.h"

//
// Import VMM Module
//
#include "SDK/Modules/VMM.h"
#include "SDK/Imports/HyperDbgVmmImports.h"

//
// Local Debugger headers
//
#include "globals/Global.h"
#include "driver/Driver.h"
#include "driver/Loader.h"

//
// Debugger Types
//
#include "header/debugger/core/Debugger.h"
//
// Debugger Sub-types
//
#include "header/debugger/transparency/Transparency.h"
#include "header/debugger/tests/KernelTests.h"
#include "header/debugger/broadcast/DpcRoutines.h"
#include "header/debugger/core/DebuggerEvents.h"
#include "header/debugger/script-engine/ScriptEngine.h"
#include "header/debugger/kernel-level/Kd.h"
#include "header/debugger/user-level/Ud.h"
#include "header/debugger/core/Dispatch.h"
#include "header/debugger/features/Hooks.h"
#include "header/debugger/broadcast/Broadcast.h"
#include "header/debugger/commands/BreakpointCommands.h"
#include "header/debugger/commands/DebuggerCommands.h"
#include "header/debugger/commands/ExtensionCommands.h"
#include "header/debugger/commands/Callstack.h"
#include "header/debugger/communication/SerialConnection.h"
#include "header/debugger/objects/Process.h"
#include "header/debugger/objects/Thread.h"
#include "header/debugger/user-level/Attaching.h"
#include "header/debugger/core/Termination.h"
#include "header/debugger/user-level/UserAccess.h"
#include "header/debugger/user-level/ThreadHolder.h"
