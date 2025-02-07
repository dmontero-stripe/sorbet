#ifndef SORBET_MOVE_METHOD_H
#define SORBET_MOVE_METHOD_H

#include "main/lsp/LSPConfiguration.h"
#include "main/lsp/LSPTypechecker.h"
#include "main/lsp/json_types.h"

namespace sorbet::realmain::lsp {

std::vector<std::unique_ptr<TextDocumentEdit>> getMoveMethodEdits(const LSPConfiguration &config,
                                                                  const core::GlobalState &gs,
                                                                  const core::lsp::MethodDefResponse &definition,
                                                                  LSPTypecheckerInterface &typechecker);

} // namespace sorbet::realmain::lsp

#endif
