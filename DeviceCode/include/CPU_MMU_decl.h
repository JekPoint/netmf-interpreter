////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef _DRIVERS_MMU_DECL_H_
#define _DRIVERS_MMU_DECL_H_ 1

//--//

void CPU_InvalidateTLBs(           );
void CPU_EnableMMU     ( void* TTB );
void CPU_DisableMMU    (           );
BOOL CPU_IsMMUEnabled  (           );

//--//

#endif // _DRIVERS_MMU_DECL_H_
