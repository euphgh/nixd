#pragma once
#include "lspserver/Protocol.h"

#include <nixexpr.hh>

std::vector<lspserver::Diagnostic> mkDiagnostics(const nix::Error &PE);

lspserver::Position translatePosition(const nix::AbstractPos &P);
