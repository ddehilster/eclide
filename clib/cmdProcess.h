#pragma once
#include "clib.h"

#define PLUGINS_FOLDER _T("plugins")

int CLIB_API runProcess(const std::_tstring &command, const std::_tstring &directory, const std::_tstring &path, const std::_tstring &in, std::_tstring &out, std::_tstring &err);
