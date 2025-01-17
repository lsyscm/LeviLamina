#include "ll/core/command/BuiltinCommands.h"
#include "ll/api/memory/Hook.h"

#include "mc/server/commands/ServerCommands.h"
#include "mc/server/commands/standard/TeleportCommand.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

namespace ll::command {
LL_TYPE_INSTANCE_HOOK(
    RegisterBuiltinCommands,
    ll::memory::HookPriority::Highest,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerInitializeEnd,
    void,
    ::ServerInstance& ins
) {
    origin(ins);
    registerTpdimCommand();
    registerVersionCommand();
    registerMemstatsCommand();
    registerCrashCommand();
    registerModManageCommand();
}
void registerCommands() { static memory::HookRegistrar<RegisterBuiltinCommands> hooks{}; }
} // namespace ll::command
