#define LIB_NAME "Ext"

// include the Defold SDK
#include <dmsdk/sdk.h>

static dmExtension::Result InitializeExt(dmExtension::Params* params)
{
    return dmExtension::RESULT_OK;
}

static dmExtension::Result FinalizeExt(dmExtension::Params* params)
{
    return dmExtension::RESULT_OK;
}

DM_DECLARE_EXTENSION(Ext, LIB_NAME, 0, 0, InitializeExt, 0, 0, FinalizeExt)
