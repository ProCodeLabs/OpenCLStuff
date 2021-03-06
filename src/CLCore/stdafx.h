#pragma once

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//=> Defines

#define WIN32_LEAN_AND_MEAN

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//=> Includes

#include "targetver.h"

#include <CL/cl.h>

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream> 
#include <memory>

#include "Common/Helper/CommonHelper.h"

#include "Export/CoreExport.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//=> Libraries

#pragma comment( lib, "OpenCL.lib" )
