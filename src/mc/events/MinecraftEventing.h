#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/ActiveDirectoryAction.h"
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/certificates/identity/edu/Role.h"
#include "mc/client/game/DiskStatus.h"
#include "mc/client/game/edu_cloud/ConflictResolutionStatus.h"
#include "mc/client/gui/screens/controllers/ClassroomSetting.h"
#include "mc/client/gui/screens/controllers/EduShareMethodType.h"
#include "mc/client/gui/screens/controllers/EduShareUriType.h"
#include "mc/client/gui/screens/controllers/RealmsPurchaseFailureReason.h"
#include "mc/client/gui/screens/controllers/SettingsScreenMode.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/MultiplayerState.h"
#include "mc/client/store/iap/PurchasePath.h"
#include "mc/client/store/iap/RealmsPurchaseIntent.h"
#include "mc/client/store/iap/transactions/RealmsPurchaseFlow.h"
#include "mc/client/store/iap/transactions/TransactionStatus.h"
#include "mc/client/util/edu_cloud_utils/Operation.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/crash_manager/CrashTelemetryProcessor.h"
#include "mc/deps/application/storage_migration/StorageMigrationType.h"
#include "mc/deps/application/storage_migration/WorldRecoveryTelemetryHandler.h"
#include "mc/deps/core/file/LevelStorageState.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/ServiceRegistrationToken.h"
#include "mc/deps/core/utility/ValidationStatus.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/RawInputType.h"
#include "mc/events/ConnectedStorageEventType.h"
#include "mc/events/EduControlPanelUpdateType.h"
#include "mc/events/IConnectionEventing.h"
#include "mc/events/IMinecraftEventing.h"
#include "mc/events/OpenCodeMethod.h"
#include "mc/events/RealmsPurchaseFulfillmentStage.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/events/UserGeneratedUriSource.h"
#include "mc/events/identity/EduSignInStage.h"
#include "mc/identity/IdentitySignInTrigger.h"
#include "mc/identity/SignInResult.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"
#include "mc/network/SignalServiceConnectStage.h"
#include "mc/network/TransportLayer.h"
#include "mc/network/connection/DisconnectFailReason.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/server/safety/ChatFloodingAction.h"
#include "mc/world/Difficulty.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/player/LoadingState.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/FileArchiverOutcome.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/storage/DBStorageFolderWatcherSnapshotKind.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AppPlatform;
class ArmorStand;
class Block;
class BlockPos;
class BrazeSDKManager;
class ChalkboardBlockActor;
class ChunkRecyclerTelemetryData;
class ContentIdentity;
class DBStorageFolderWatcher;
class Experiments;
class IClientInstance;
class IPacketObserver;
class ItemDescriptor;
class LevelChunk;
class LevelSeed64;
class LevelSettings;
class Mob;
class MobEffectInstance;
class MultiPlayerLevel;
class NetworkIdentifier;
class Offer;
class Options;
class PackInstance;
class PackManifest;
class PackReport;
class PackSettings;
class PacketObserver;
class PerfContextTrackerReport;
class Player;
class PlayerRespawnTelemetryData;
class PushNotificationMessage;
class RequestTelemetry;
class ScriptPluginResult;
class SearchRequestTelemetry;
class StructureEditorData;
class StructureTelemetryClientData;
class TaskGroup;
class TelemetryInfo;
class Vec3;
struct ChunkRecyclerTelemetryOutput;
struct ExtraLicenseData;
struct LevelStorageEventingContext;
struct LowMemoryReport;
struct NewBlockID;
struct PacksInfoData;
struct PlatformOfferPurchaseDetails;
struct ProductSku;
struct ProfilerLiteTelemetry;
struct SerialWorkListLogEntry;
struct StackStats;
struct WebviewDownloadInfo;
struct glTFExportData;
namespace Bedrock { class SessionInfo; }
namespace Bedrock { struct CrashUploadStatus; }
namespace Bedrock { struct DeviceIdContext; }
namespace Bedrock { struct DirectoryEntry; }
namespace Bedrock { struct WorldRecoveryTelemetryEvent; }
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::Threading { class Mutex; }
namespace Core { class Path; }
namespace Core::Profile { struct FileCounters; }
namespace Json { class Value; }
namespace Legacy { struct WorldConversionReport; }
namespace OreUI { struct DataTracker; }
namespace Realms { struct RealmId; }
namespace Social { class IUserManager; }
namespace Social { class Identity; }
namespace Social { struct PermissionCheckResult; }
namespace Social { struct PlayerIDs; }
namespace Social::Events { class AchievementEventing; }
namespace Social::Events { class Event; }
namespace Social::Events { class EventManager; }
namespace Social::Events { class IEventListener; }
namespace Social::Events { class Measurement; }
namespace Social::Events { class PlayerTelemetry; }
namespace Social::Events { class Property; }
namespace Social::Events { class RealtimeRoute; }
namespace Social::Events { class ScreenFlow; }
namespace Social::Events { class TelemetryHeartbeat; }
namespace Social::Events { struct InboxSummaryData; }
namespace Social::eventData { class PersonaOfferClickedData; }
namespace Social::eventData { class StoreOfferClickedData; }
namespace Webview { struct TelemetryCommonProperties; }
namespace librarySearch { struct TelemetryData; }
namespace mce { class UUID; }
namespace storeSearch { struct TelemetryData; }
// clang-format on

class MinecraftEventing : public ::IMinecraftEventing,
                          public ::Bedrock::CrashTelemetryProcessor,
                          public ::Bedrock::WorldRecoveryTelemetryHandler {
public:
    // MinecraftEventing inner types define
    enum class InteractionType : int {
        Breeding   = 1,
        Taming     = 2,
        Curing     = 3,
        Crafted    = 4,
        Shearing   = 5,
        Milking    = 6,
        Trading    = 7,
        Feeding    = 8,
        Igniting   = 9,
        Coloring   = 10,
        Naming     = 11,
        Leashing   = 12,
        Unleashing = 13,
        PetSleep   = 14,
        Trusting   = 15,
        Commanding = 16,
    };

    enum class POIBlockInteractionType : int {
        None                = 0,
        Extend              = 1,
        Clone               = 2,
        Lock                = 3,
        Create              = 4,
        CreateLocator       = 5,
        Rename              = 6,
        ItemPlaced          = 7,
        ItemRemoved         = 8,
        Cooking             = 9,
        Dousing             = 10,
        Lighting            = 11,
        Haystack            = 12,
        Filled              = 13,
        Emptied             = 14,
        AddDye              = 15,
        DyeItem             = 16,
        ClearItem           = 17,
        EnchantArrow        = 18,
        CompostItemPlaced   = 19,
        RecoveredBonemeal   = 20,
        BookPlaced          = 21,
        BookOpened          = 22,
        Disenchant          = 23,
        Repair              = 24,
        DisenchantAndRepair = 25,
    };

    enum class AchievementIds : int {
        ChestFullOfCobblestone          = 7,
        DiamondForYou                   = 10,
        IronBelly                       = 20,
        IronMan                         = 21,
        OnARail                         = 29,
        Overkill                        = 30,
        ReturnToSender                  = 37,
        SniperDuel                      = 38,
        StayinFrosty                    = 39,
        TakeInventory                   = 40,
        MapRoom                         = 50,
        FreightStation                  = 52,
        SmeltEverything                 = 53,
        TasteOfYourOwnMedicine          = 54,
        WhenPigsFly                     = 56,
        Inception                       = 58,
        ArtificialSelection             = 60,
        FreeDiver                       = 61,
        SpawnTheWither                  = 62,
        Beaconator                      = 63,
        GreatView                       = 64,
        SuperSonic                      = 65,
        TheEndAgain                     = 66,
        TreasureHunter                  = 67,
        ShootingStar                    = 68,
        FashionShow                     = 69,
        Brilliance                      = 70,
        SelfPublishedAuthor             = 71,
        AlternativeFuel                 = 72,
        SleepWithTheFishes              = 73,
        Castaway                        = 74,
        ImAMarineBiologist              = 75,
        SailThe7Seas                    = 76,
        MeGold                          = 77,
        Ahoy                            = 78,
        Atlantis                        = 79,
        OnePickleTwoPickleSeaPickleFour = 80,
        DoaBarrelRoll                   = 81,
        Moskstraumen                    = 82,
        Echolocation                    = 83,
        WhereHaveYouBeen                = 84,
        TopOfTheWorld                   = 85,
        FruitOnTheLoom                  = 86,
        SoundTheAlarm                   = 87,
        BuyLowSellHigh                  = 88,
        Disenchanted                    = 89,
        TimeForStew                     = 90,
        BeeOurGuest                     = 91,
        TotalBeeLocation                = 92,
        StickySituation                 = 93,
        CoverMeInDebris                 = 94,
        FloatYourGoat                   = 95,
        Friend                          = 96,
        WaxOnWaxOff                     = 97,
        StriderRiddenInLavaInOverworld  = 98,
        GoatHornAcquired                = 99,
        JukeboxUsedInMeadows            = 100,
        TradedAtWorldHeight             = 101,
        SurvivedFallFromWorldHeight     = 102,
        SneakCloseToSculkSensor         = 103,
        ItSpreads                       = 104,
        BirthdaySong                    = 105,
        WithOurPowersCombined           = 106,
        PlantingThePast                 = 107,
        CarefulRestoration              = 108,
        Revaulting                      = 109,
        CraftersCraftingCrafters        = 110,
        WhoNeedsRockets                 = 111,
        OverOverkill                    = 112,
        HeartTransplanter               = 113,
        Count                           = 114,
    };

    enum class TeleportationCause : int {
        Unknown                 = 0,
        Projectile              = 1,
        ChorusFruit             = 2,
        Command                 = 3,
        Behavior                = 4,
        TeleportationCauseCount = 5,
    };

    enum class BlockPlacementMethod : int {
        Entity  = 0,
        Command = 1,
    };

    enum class AccountType : int {
        Xbl   = 1,
        Guest = 2,
        Other = 3,
    };

    enum class SplitScreenMode : int {
        Vertical   = 1,
        Horizontal = 2,
    };

    enum class ItemInteractMethod : int {
        Use   = 0,
        Place = 1,
    };

    enum class ChangeType : int {
        Unknown = 0,
        Added   = 1,
        Removed = 2,
        Updated = 3,
    };

    enum class PoiEventBlockType : int {
        BlastFurnace     = 0,
        BrewingStand     = 1,
        CartographyTable = 2,
        Grindstone       = 3,
        Loom             = 4,
        Smoker           = 5,
        Stonecutter      = 6,
        Barrel           = 7,
        Bell             = 8,
        Campfire         = 9,
        Cauldron         = 10,
        Composter        = 11,
        Lectern          = 12,
    };

    enum class PoiEventType : int {
        BlockUsageAttempt = 0,
        BlockUsed         = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Social::Events::EventManager>>       mEventManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TelemetryInfo>>                      mTelemetryInfo;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Social::Events::TelemetryHeartbeat>> mHeartbeat;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BrazeSDKManager>>                   mBrazeSDKManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Social::IUserManager>>     mUserManager;
    ::ll::TypedStorage<4, 4, uint>                                                    mPrimaryLocalUserId;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::AppPlatform>>              mAppPlatform;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mAssertTelemetrySubscription;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                      mSettingsDir;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mPlayerSessionID;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mAppSessionID;
    ::ll::TypedStorage<1, 1, bool>                                                    mShouldHaveAchievementsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mAchievementsAlwaysEnabled;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mAchivementsAlwaysOptionSubscription;
    ::ll::TypedStorage<8, 8, double>                                           mLastScreenTimestamp;
    ::ll::TypedStorage<8, 8, double>                                           mLastImGuiScreenTimestamp;
    ::ll::TypedStorage<1, 1, bool>                                             mFlagPlayerGameTypeDefault;
    ::ll::TypedStorage<1, 1, bool>                                             mFlagDeepLink;
    ::ll::TypedStorage<4, 4, int>                                              mNumTimesDeviceLost;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, double>>              mPlayerLastDamagedTimestamp;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>          mWorldSessionIdGenerationTimestamp;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::IMinecraftEventing>> mServiceRegistrationToken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PacketObserver>>              mPacketObserver;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::IPacketObserver>>    mPacketObserverRegistrationToken;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChunkRecyclerTelemetryData>>  mChunkRecyclerTelemetryData;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::ChunkRecyclerTelemetryData>>
        mChunkRecyclerTelemetryDataRegistrationToken;
    ::ll::TypedStorage<8, 8, ::ServiceRegistrationToken<::Bedrock::WorldRecoveryTelemetryHandler>>
                                                             mWorldRecoveryRegistrationToken;
    ::ll::TypedStorage<8, 32, ::std::string>                 mLastSentID;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftEventing& operator=(MinecraftEventing const&);
    MinecraftEventing(MinecraftEventing const&);
    MinecraftEventing();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecraftEventing() /*override*/;

    // vIndex: 1
    virtual void init(
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const& userManager,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&             appPlatform
    ) /*override*/;

    // vIndex: 2
    virtual void initDeviceAndSessionIds() /*override*/;

    // vIndex: 3
    virtual void initEditorEventListener() /*override*/;

    // vIndex: 4
    virtual void shutdown() /*override*/;

    // vIndex: 13
    virtual void updatePrimaryLocalUserId(uint const& userId) /*override*/;

    // vIndex: 14
    virtual void registerSecondaryUserCommonProperties(uint const& userId, ::Social::Identity& identity) const
        /*override*/;

    // vIndex: 15
    virtual void unregisterSecondaryUserCommonProperties(uint const& userId) const /*override*/;

    // vIndex: 16
    virtual void updateIsLegacyPlayer(bool isLegacyPlayer) /*override*/;

    // vIndex: 17
    virtual void updateIsTrial(bool isTrial) const /*override*/;

    // vIndex: 89
    virtual void updateEditionType() /*override*/;

    // vIndex: 19
    virtual void addListener(::std::unique_ptr<::Social::Events::IEventListener> listener) /*override*/;

    // vIndex: 20
    virtual void clearListeners() /*override*/;

    // vIndex: 18
    virtual void registerOptionsObserver(::std::shared_ptr<::Options> options) /*override*/;

    // vIndex: 85
    virtual void setTestBuildIdTag(char const* id) /*override*/;

    // vIndex: 83
    virtual void removeTestBuildIdTag() /*override*/;

    // vIndex: 86
    virtual void setTestTelemetryTag(char const* name) /*override*/;

    // vIndex: 84
    virtual void removeTestTelemetryTag() /*override*/;

    // vIndex: 87
    virtual void stopDebugEventLoggingForAllListeners() /*override*/;

    // vIndex: 88
    virtual void tick() /*override*/;

    // vIndex: 11
    virtual void forceSendEvents() /*override*/;

    // vIndex: 260
    virtual ::std::string getSessionId() /*override*/;

    // vIndex: 5
    virtual ::std::string const& getPlayerSessionId() /*override*/;

    // vIndex: 6
    virtual ::std::chrono::steady_clock::time_point getWorldSessionIdGenerationTimestamp() const /*override*/;

    // vIndex: 197
    virtual void fireEventDefaultGameTypeChanged(::GameType oldGameType, ::GameType newGameType) /*override*/;

    // vIndex: 128
    virtual void fireEventWorldLoaded(
        ::Player*            player,
        ::std::string const& personaSlot,
        ::std::string const& classicSkinId,
        bool                 usingClassicSkin
    ) /*override*/;

    // vIndex: 121
    virtual void
    fireEventArmorStandItemEquipped(::ArmorStand const& armorStand, ::ItemDescriptor const& item) /*override*/;

    // vIndex: 122
    virtual void fireEventLockedItemGiven() /*override*/;

    // vIndex: 54
    virtual void tryFireEventProgressLoadTimes(
        ::std::string const&                                   calledFromScreen,
        ::std::vector<::std::pair<::std::string, float>> const progressHandlerLoadTimes
    ) /*override*/;

    // vIndex: 141
    virtual void fireEventBlockPlacedByCommand(::Block const& placedBlock, int numberOfBlocksPlaced) /*override*/;

    // vIndex: 78
    virtual void fireEventEntitySpawned(::Player* player, int mobType, uint spawnMethod) /*override*/;

    // vIndex: 49
    virtual void
    fireEventDevSlashCommandExecuted(::std::string const& commandName, ::std::string const& command) /*override*/;

    // vIndex: 50
    virtual void fireCommandParseTableTelemetry(
        bool const                                                         isServer,
        ::std::vector<::IMinecraftEventing::CommandParseTableEntry> const& parseTableDetails
    ) const /*override*/;

    // vIndex: 51
    virtual void fireEventPlayerTravelled(::Player* player, float metersTravelledSinceLastEvent) /*override*/;

    // vIndex: 123
    virtual void fireEventPlayerBounced(::Player* player, ::Block const& block, int bounceHeight) /*override*/;

    // vIndex: 210
    virtual void fireEventPlayerDamaged(::Player* player, ::ActorDamageCause damageCause) /*override*/;

    // vIndex: 124
    virtual void fireEventSetValidForAchievements(::Player* player, bool currentlyValidForAchievements) /*override*/;

    // vIndex: 125
    virtual void fireEventAchievementReceived(
        ::std::string const& title,
        ::std::string const& description,
        ::std::string const& achievementId
    ) /*override*/;

    // vIndex: 126
    virtual void updatePlayerUndergroundStatus(::Player* player, bool const isUnderground) /*override*/;

    // vIndex: 127
    virtual void
    fireEventPlayerAttemptingExploit(::Player* player, ::IMinecraftEventing::ExploitType exploitType) /*override*/;

    // vIndex: 242
    virtual void fireEventWorldGenerated(
        ::std::string const&   levelId,
        ::LevelSettings const& levelSettings,
        bool                   fromTemplate
    ) /*override*/;

    // vIndex: 90
    virtual void fireEventMultiplayerClientConnectionStateChanged(
        ::std::string const& connectionType,
        uint                 fromState,
        uint                 toState,
        uint                 port,
        ::std::string const& status
    ) /*override*/;

    // vIndex: 91
    virtual void fireEventPacketViolationDetected(
        uint64,
        ::std::string,
        ::PacketViolationResponse,
        ::MinecraftPacketIds,
        ::NetworkIdentifier const&,
        uint,
        ::SubClientId,
        ::SubClientId,
        uint
    ) /*override*/;

    // vIndex: 92
    virtual void fireEventJoinCanceled(::LoadingState currentState) /*override*/;

    // vIndex: 22
    virtual void fireEvent(
        ::std::string const&                                eventName,
        ::std::vector<::Social::Events::Property> const&    properties,
        ::std::vector<::Social::Events::Measurement> const& measurements,
        bool                                                shouldAggregate
    ) /*override*/;

    // vIndex: 23
    virtual void fireEventBlockTypeRegistryChecksumMismatch(
        ::std::string const& reason,
        uint64 const&        serverBlockChecksum,
        uint64 const&        clientBlockChecksum,
        ::std::string const& serverVersion
    ) /*override*/;

    // vIndex: 3
    virtual void fireEventOnSuccessfulClientLogin(::MultiPlayerLevel const* level) /*override*/;

    // vIndex: 25
    virtual void fireEventStartWorld(
        ::IMinecraftEventing::NetworkType            networkType,
        ::std::string const&                         ipAddress,
        ::Social::MultiplayerServiceIdentifier const friendWorldType
    ) /*override*/;

    // vIndex: 26
    virtual void
    fireEventPlayerJoinWorld(uint const&, ::SubClientId const, bool, ::std::optional<bool>, ::IConnectionEventing::PlayerJoinWorldAttemptState const, int, ::Connection::DisconnectFailReason, ::TransportLayer, ::IMinecraftEventing::NetworkType, ::Social::MultiplayerState, bool, ::Social::MultiplayerServiceIdentifier, ::std::string const&, ::std::string const&) /*override*/
        ;

    // vIndex: 27
    virtual void fireEventSignalServiceConnect(
        ::SignalServiceConnectStage stage,
        bool                        bIsSigningInAsHost,
        ::std::string const&        stageProperties,
        uint64                      netherNetId,
        ::std::string const&        correlationId
    ) /*override*/;

    // vIndex: 28
    virtual void fireEventOnClientDisconnect(::SubClientId, bool, ::Connection::DisconnectFailReason) /*override*/;

    // vIndex: 29
    virtual void
    fireEventOnServerDisconnect(::Connection::DisconnectFailReason, ::std::string const&, ::SubClientId, ::std::string const&, uint64, ::std::string const&) /*override*/
        ;

    // vIndex: 2
    virtual void fireEventConnectionFailed(::IConnectionEventing::ConnectionFailureReason failure) /*override*/;

    // vIndex: 30
    virtual void fireEventHttpClientError(::std::string const& error) /*override*/;

    // vIndex: 56
    virtual void fireEventSignInToIdentity(
        ::IMinecraftEventing::SignInAccountType accountType,
        ::Social::IdentitySignInTrigger         trigger,
        ::std::string const&                    signInSource,
        bool                                    signInUIShown,
        ::IMinecraftEventing::SignInStage       stage,
        ::Social::SignInResult                  result,
        int                                     retryCount,
        ::Social::PlayerIDs                     ids,
        ::std::string const&                    errorCode
    ) /*override*/;

    // vIndex: 57
    virtual void fireEventSignOutOfIdentity(
        ::IMinecraftEventing::SignInAccountType accountType,
        ::Social::IdentitySignInTrigger         trigger,
        ::std::string const&                    accountId,
        ::std::string const&                    errorCode
    ) /*override*/;

    // vIndex: 221
    virtual void
    fireEventSignInEdu(::std::string const&, ::edu::Role, ::Identity::EduSignInStage, ::std::string const&, ::std::string const&, ::std::vector<::std::pair<::std::string, ::std::string>> const&) /*override*/
        ;

    // vIndex: 222
    virtual void
    fireEventSignOutEdu(::std::string const&, ::edu::Role, ::std::string const&, ::std::string const&, ::std::string const&) /*override*/
        ;

    // vIndex: 223
    virtual void fireEventSwitchAccountEdu(::std::string const&, ::edu::Role, ::std::string const&) /*override*/;

    // vIndex: 224
    virtual void fireEventEduDemoConversion(::edu::Role, ::LastClickedSource) /*override*/;

    // vIndex: 227
    virtual void fireEventCloudOperationStartedEdu(
        ::EduCloudUtils::Operation const      operation,
        ::std::string const&                  cloudCorrelationId,
        uint64 const                          size,
        ::std::optional<::std::string> const& driveItemId
    ) /*override*/;

    // vIndex: 229
    virtual void fireEventCloudOperationEndedEdu(
        ::EduCloudUtils::Operation const      operation,
        ::std::string const&                  cloudCorrelationId,
        ::std::chrono::milliseconds const     elapsedTime,
        uint const                            status,
        uint64 const                          size,
        ::std::optional<::std::string> const& driveItemId,
        ::std::optional<::std::string> const& errorCode,
        ::std::optional<::std::string> const& errorMessage,
        ::std::optional<::std::string> const& error
    ) /*override*/;

    // vIndex: 228
    virtual void fireEventCloudMyWorldsSummary(
        int const totalWorldsCount,
        int const placeholderCount,
        int const needsUploadCount,
        int const ctagMismatchCount,
        int const conflictCount
    ) /*override*/;

    // vIndex: 230
    virtual void fireEventCloudConflictCheckEdu(
        ::std::string const&                       cloudCorrelationId,
        ::EduCloud::ConflictResolutionStatus const conflictStatus
    ) /*override*/;

    // vIndex: 225
    virtual void fireEventPopupFiredEdu(
        ::std::string const&          mutsUserId,
        ::std::string const&          dialogType,
        ::std::string const&          experienceId,
        ::std::string const&          title,
        ::ActiveDirectoryAction const postAction
    ) /*override*/;

    // vIndex: 226
    virtual void fireEventPlayIntegrityCheck(
        ::std::string const& result,
        ::std::string const& appRecognitionVerdict,
        ::std::string const& deviceIntegrity,
        ::std::string const& appLicensingVerdict
    ) /*override*/;

    // vIndex: 1
    virtual void fireServerConnectionEvent(
        ::IConnectionEventing::ServerConnectionOutcome outcome,
        uint                                           pingLatency,
        double                                         timeElapsed,
        ::std::string const&                           creatorName,
        ::std::string const&                           worldId
    ) /*override*/;

    // vIndex: 32
    virtual void fireServerConnectionAttemptEvent(
        ::std::string const& creatorName,
        bool                 isTransfer,
        ::std::string const& serverAddress
    ) /*override*/;

    // vIndex: 142
    virtual void
    fireEventServerPlayerJoinedGame(::NetworkIdentifier const&, ::SubClientId, ::std::string const&) /*override*/;

    // vIndex: 143
    virtual void fireEventScriptPluginDiscovery(::ScriptPluginResult const& pluginResult, bool client) /*override*/;

    // vIndex: 144
    virtual void fireEventScriptPluginRun(
        ::ScriptPluginResult const& pluginResult,
        ::std::chrono::microseconds runDuration,
        bool                        client
    ) /*override*/;

    // vIndex: 145
    virtual void fireEventScriptDebuggerListen(bool client, bool autoAttach) /*override*/;

    // vIndex: 146
    virtual void fireEventScriptDebuggerConnect(bool client, bool autoAttach, int retries) /*override*/;

    // vIndex: 147
    virtual void fireEditorEventToolActivated(::std::string const& toolName) /*override*/;

    // vIndex: 148
    virtual void fireEditorUndo(::std::string const& transactionName) /*override*/;

    // vIndex: 149
    virtual void fireEditorRedo(::std::string const& transactionName) /*override*/;

    // vIndex: 150
    virtual void fireEditorScriptAction(
        ::std::string const& scriptSource,
        ::std::string const& actionName,
        ::std::string const& actionMetadata
    ) /*override*/;

    // vIndex: 24
    virtual void fireEventStartClient(::std::string const& ipAddress) /*override*/;

    // vIndex: 40
    virtual void fireEventHardwareInfo() /*override*/;

    // vIndex: 41
    virtual void fireEventDeviceLost() /*override*/;

    // vIndex: 42
    virtual void fireEventRenderingSizeChanged() /*override*/;

    // vIndex: 43
    virtual void
    fireEventDiskStatus(::DiskStatus status, ::Core::LevelStorageState errorCode, uint64 freeSpace) /*override*/;

    // vIndex: 44
    virtual void fireEventStorageAreaFull(
        ::std::string const&                            areaPath,
        ::std::vector<::Bedrock::DirectoryEntry> const& diskSizeData
    ) /*override*/;

    // vIndex: 58
    virtual void fireEventAppPaused() /*override*/;

    // vIndex: 59
    virtual void fireEventAppUnpaused() /*override*/;

    // vIndex: 60
    virtual void fireEventAppSurfaceCreated() /*override*/;

    // vIndex: 61
    virtual void fireEventAppSurfaceDestroyed() /*override*/;

    // vIndex: 231
    virtual void fireEventPurchaseGameAttempt(
        ::std::string const& storeId,
        ::std::string const& activeTab,
        ::std::string const& productId
    ) /*override*/;

    // vIndex: 232
    virtual void fireEventPurchaseGameResult(int purchaseResult) /*override*/;

    // vIndex: 233
    virtual void fireEventTrialDeviceIdCorrelation(
        int64                myTime,
        ::std::string const& theirId,
        int64                theirTime,
        ::std::string const& theirLastSessionId
    ) /*override*/;

    // vIndex: 234
    virtual void fireEventDeviceIdManagerFailOnIdentityGained() /*override*/;

    // vIndex: 98
    virtual void fireEventDlcStorageFull(
        ::std::string const& productId,
        uint64               dlcSize,
        uint64               onDiskScratchSpace,
        uint64               scratchSpace,
        uint64               premiumSpace
    ) /*override*/;

    // vIndex: 235
    virtual void fireEventPushNotificationPermission(bool permission, ::std::string const& deviceId) /*override*/;

    // vIndex: 236
    virtual void fireEventPushNotificationReceived(::PushNotificationMessage const& msg) /*override*/;

    // vIndex: 237
    virtual void
    fireEventPushNotificationOpened(::std::string const& threadId, ::std::string const& deepLink) /*override*/;

    // vIndex: 238
    virtual void firePerfTestEvent(
        ::std::string const&                                    testArtifact,
        ::std::string const&                                    modelName,
        ::std::string const&                                    renderSize,
        uint                                                    renderDistance,
        uint                                                    simDistance,
        ::std::string const&                                    memorySize,
        ::std::vector<::std::pair<::std::string, float>> const& testArtifactData
    ) /*override*/;

    // vIndex: 239
    virtual void fireEventLicenseCheck(bool isLicensed, ::ExtraLicenseData& data) /*override*/;

    // vIndex: 240
    virtual void
    fireQueryOfferResult(::std::string const& storeID, int NumberOfOffers, bool QuerySucceeded) /*override*/;

    // vIndex: 241
    virtual void fireEventQueryPurchasesResult(
        ::std::string const& storeID,
        int                  NumberOfPurchases,
        bool                 QuerySucceeded
    ) /*override*/;

    // vIndex: 99
    virtual void fireEventIAPPurchaseAttempt(
        ::std::string const& correlationId,
        ::std::string const& storeId,
        ::Offer&             offer,
        ::PurchasePath       path
    ) /*override*/;

    // vIndex: 100
    virtual void fireEventIAPPurchaseResolved(
        ::std::string const&                 correlationId,
        ::std::string const&                 storeId,
        ::Offer&                             offer,
        ::IMinecraftEventing::PurchaseResult purchaseRes,
        ::PurchasePath                       path
    ) /*override*/;

    // vIndex: 101
    virtual void fireEventIAPRedeemAttempt(
        ::std::string const& correlationId,
        ::std::string const& storeId,
        ::std::string const& productId,
        ::PurchasePath       path
    ) /*override*/;

    // vIndex: 102
    virtual void fireEventIAPRedeemResolved(
        ::std::string const&                 correlationId,
        ::std::string const&                 storeId,
        ::std::string const&                 productId,
        ::IMinecraftEventing::PurchaseResult purchaseRes,
        ::PurchasePath                       path
    ) /*override*/;

    // vIndex: 103
    virtual void fireEventPurchaseAttempt(
        ::std::string const&            correlationId,
        ::std::string const&            productId,
        ::std::string const&            price,
        ::IMinecraftEventing::StoreType storeType,
        ::PurchasePath                  path
    ) /*override*/;

    // vIndex: 104
    virtual void fireEventPurchaseResolved(
        ::std::string const&                 correlationId,
        ::std::string const&                 productId,
        ::std::string const&                 price,
        ::IMinecraftEventing::StoreType      storeType,
        ::IMinecraftEventing::PurchaseResult purchaseRes,
        ::PurchasePath                       path
    ) /*override*/;

    // vIndex: 105
    virtual void fireEventUnfulfilledPurchaseFound(::PlatformOfferPurchaseDetails& unfulfilledPurchase) /*override*/;

    // vIndex: 106
    virtual void fireEventPurchaseFailureDetails(
        int                  httpCode,
        ::std::string const& errorMessage,
        ::std::string const& productId,
        ::std::string const& transactionId
    ) /*override*/;

    // vIndex: 298
    virtual void fireEventDeviceAccountFailure(
        ::IMinecraftEventing::SignInStage               stage,
        ::IMinecraftEventing::DeviceAccountFailurePhase phase,
        uint                                            resultStatus,
        ::std::string const&                            accountID
    ) /*override*/;

    // vIndex: 297
    virtual void fireEventDeviceAccountSuccess(bool isNewAccount, ::std::string const& accountID) /*override*/;

    // vIndex: 96
    virtual void fireEventEntitlementListInfo(
        ::std::vector<::ContentIdentity>& entitlementContentIds,
        bool                              isLegacyList
    ) /*override*/;

    // vIndex: 52
    virtual void fireEventVideoPlayed(::std::string const& productId, ::std::string const& videoUrl) /*override*/;

    // vIndex: 244
    virtual void fireEventBundleSubOfferClicked(
        int                  offerIndex,
        int                  bundleSubOfferCount,
        ::std::string const& telemetryId,
        ::std::string const& productId,
        bool                 isOnSale,
        ::std::string const& timeRemainingOnSale
    ) /*override*/;

    // vIndex: 246
    virtual void fireEventStoreOfferClicked(::Social::eventData::StoreOfferClickedData const& eventData) /*override*/;

    // vIndex: 245
    virtual void
    fireEventStoreOfferClicked(::std::string const telemetryId, ::std::string const& productId) /*override*/;

    // vIndex: 247
    virtual void fireEventPersonaOfferClicked(::Social::eventData::PersonaOfferClickedData const& eventData
    ) /*override*/;

    // vIndex: 248
    virtual void fireEventStoreSearch(::storeSearch::TelemetryData const& telemetryData) /*override*/;

    // vIndex: 249
    virtual void fireEventSearchItemSelected(
        int const            correlationId,
        int const            sessionId,
        ::std::string const& productId,
        int const            row,
        int const            column,
        int const            currentPage
    ) /*override*/;

    // vIndex: 250
    virtual void fireEventRealmsSubscriptionPurchaseStarted(
        ::ProductSku const&    productSku,
        ::RealmsPurchaseIntent intent
    ) /*override*/;

    // vIndex: 251
    virtual void fireEventRealmsSubscriptionPurchaseSucceeded(
        ::ProductSku const&    productSku,
        ::RealmsPurchaseIntent intent
    ) /*override*/;

    // vIndex: 252
    virtual void fireEventRealmsSubscriptionPurchaseFailed(
        ::ProductSku const&           productSku,
        ::RealmsPurchaseIntent        intent,
        ::RealmsPurchaseFailureReason reason
    ) /*override*/;

    // vIndex: 253
    virtual void fireEventRealmsPurchaseFulfillment(
        ::std::string const&             correlationId,
        ::std::string const&             storeId,
        ::std::string const&             productId,
        ::PurchasePath                   path,
        ::RealmsPurchaseFlow             purchaseFlow,
        ::RealmsPurchaseFulfillmentStage stage,
        ::std::string const&             failureReason
    ) /*override*/;

    // vIndex: 254
    virtual void fireEventUserListUpdated(
        ::std::string const& productId,
        ::std::string const& listId,
        ::std::string const& operation,
        bool                 success
    ) /*override*/;

    // vIndex: 255
    virtual void fireEventUgcAcquisitionStateChanged(
        ::std::string const& ugcProductId,
        uint64               downloadSize,
        double               elapsedTime,
        bool                 isUpdate,
        int                  retries,
        bool                 silent,
        int                  numContentTrackers,
        ::std::string const& result,
        ::std::string const& resultDetails,
        int                  httpStatus,
        int                  errorCode
    ) /*override*/;

    // vIndex: 113
    virtual void prepEventSearchCatalogRequest(::SearchRequestTelemetry const& telem) /*override*/;

    // vIndex: 114
    virtual void fireEventSearchCatalogRequest(::SearchRequestTelemetry const& telem) /*override*/;

    // vIndex: 115
    virtual void
    fireEventStoreLocalizationBinaryFetchResponse(int const status, uint const currentFetchAttempt) /*override*/;

    // vIndex: 116
    virtual void fireEventStoreSessionResponse(
        ::std::string const& responseType,
        int const            status,
        int const            retryCount
    ) /*override*/;

    // vIndex: 117
    virtual void fireEventStoreDiscoveryRequestResponse(int const status, int const retryAttempt) /*override*/;

    // vIndex: 118
    virtual void fireEventStorePlayFabRequestResponse(ushort const status) /*override*/;

    // vIndex: 119
    virtual void fireEventServerDrivenLayoutPageLoaded(
        ::RequestTelemetry& telem,
        ::std::string       pageID,
        int                 requestSize,
        int                 responseSize,
        int                 rowCount,
        int                 itemCount,
        int                 imageCount
    ) /*override*/;

    // vIndex: 120
    virtual void fireEventServerDrivenLayoutImagesLoaded(
        ::RequestTelemetry&    telem,
        ::std::string          pageID,
        int                    imageCount,
        uint64                 totalImagesSize,
        int                    successCount,
        int                    failCount,
        int                    cachedCount,
        ::std::vector<ushort>& responseCodes
    ) /*override*/;

    // vIndex: 108
    virtual void fireEventTreatmentsSet(
        ::std::vector<::std::string> const& treatments,
        ::std::string const&                treatmentContext
    ) /*override*/;

    // vIndex: 109
    virtual void fireEventProgressionsSet(::std::vector<::std::string> const& progressions) /*override*/;

    // vIndex: 107
    virtual void fireEventTreatmentsCleared() /*override*/;

    // vIndex: 110
    virtual void fireEventPackImportTimeout(::std::string const& productId) /*override*/;

    // vIndex: 111
    virtual void fireEventStoreErrorPage(::std::string const& errorCode, ::std::string const& pageId) /*override*/;

    // vIndex: 112
    virtual void setServerIdsforClient(
        ::std::string const& multiplayerCorrelationId,
        ::std::string const& serverVersion,
        ::std::string const& serverId,
        ::std::string const  worldId,
        ::std::string const  scenarioId
    ) /*override*/;

    // vIndex: 45
    virtual void fireEventOptionsUpdated(::Options& options, ::InputMode inputMode, bool onStartup) /*override*/;

    // vIndex: 46
    virtual void fireEventChatSettingsUpdated(
        ::Player const*                                  player,
        ::std::vector<::Social::Events::Property> const& properties
    ) const /*override*/;

    // vIndex: 192
    virtual void
    fireEventControlRemappedByPlayer(::std::string const& actionName, ::RawInputType inputType, int keyCode) const
        /*override*/;

    // vIndex: 193
    virtual void fireEventDifficultySet(::Difficulty oldDifficulty, ::Difficulty newDifficulty) /*override*/;

    // vIndex: 196
    virtual void
    fireEventGameRulesUpdated(bool oldValue, bool newValue, ::std::string const& gameRuleName) /*override*/;

    // vIndex: 195
    virtual void fireEventGameRulesUpdated(int oldValue, int newValue, ::std::string const& gameRuleName) /*override*/;

    // vIndex: 194
    virtual void
    fireEventGameRulesUpdated(float oldValue, float newValue, ::std::string const& gameRuleName) /*override*/;

    // vIndex: 66
    virtual void fireCurrentInputUpdated(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client) /*override*/;

    // vIndex: 62
    virtual void fireEventSplitScreenUpdated(::IClientInstance const& client) /*override*/;

    // vIndex: 47
    virtual void
    fireEventPerformanceMetrics(::ProfilerLiteTelemetry const& profileTelemetry, bool rayTracingEnabled) /*override*/;

    // vIndex: 48
    virtual void fireEventPerformanceContext(::PerfContextTrackerReport const& perfContextReport) /*override*/;

    // vIndex: 1
    virtual void fireEventScreenChanged(
        uint const&                                               userId,
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    ) /*override*/;

    // vIndex: 2
    virtual void fireEventImGuiScreenChanged(
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    ) /*override*/;

    // vIndex: 63
    virtual void fireEventPopupClosed(::std::string const& popupName) const /*override*/;

    // vIndex: 198
    virtual void fireEventOfferRated(
        ::std::string const& productId,
        int                  rating,
        int                  previous_rating,
        int                  count,
        double               timeElapsed
    ) /*override*/;

    // vIndex: 199
    virtual void
    fireEventNewContentCheckCompleted(::std::string const& newContentPrefix, bool hasNewStoreContent) /*override*/;

    // vIndex: 200
    virtual void fireEventEncyclopediaTopicChanged(::std::string const& topicName, ::InputMode inputMode) /*override*/;

    // vIndex: 201
    virtual void fireEventHowToPlayTopicChanged(::std::string const& topicName, ::InputMode inputMode) /*override*/;

    // vIndex: 202
    virtual void fireEventAndroidHelpRequest() /*override*/;

    // vIndex: 203
    virtual void fireEventWorldFilesListed(
        uint64 numLevels,
        uint64 totalSizeMB,
        uint64 largestLevelMB,
        uint64 smallestLevelMB
    ) /*override*/;

    // vIndex: 97
    virtual void fireEventStorage(int state, ::std::string const& extra) /*override*/;

    // vIndex: 218
    virtual void fireEventStorageReport(::std::string const& report) /*override*/;

    // vIndex: 205
    virtual void fireEventPlayerMessageSay(::std::string const& fromName, ::std::string const& message) /*override*/;

    // vIndex: 206
    virtual void fireEventPlayerMessageTell(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message
    ) /*override*/;

    // vIndex: 207
    virtual void fireEventPlayerMessageChat(::std::string const& fromName, ::std::string const& message) /*override*/;

    // vIndex: 208
    virtual void fireEventPlayerMessageMe(::std::string const& fromName, ::std::string const& message) /*override*/;

    // vIndex: 209
    virtual void fireEventPlayerMessageTitle(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message
    ) /*override*/;

    // vIndex: 211
    virtual void
    fireEventPlayerKicked(::std::string const& sessionType, ::std::string const& kickedPlayer) /*override*/;

    // vIndex: 212
    virtual void fireEventPlayerBanned(::std::string const& bannedPlayer) /*override*/;

    // vIndex: 261
    virtual void fireEventChunkLoaded(::LevelChunk& chunk) /*override*/;

    // vIndex: 262
    virtual void fireEventChunkUnloaded(::LevelChunk& chunk) /*override*/;

    // vIndex: 263
    virtual void fireEventChunkChanged(::LevelChunk& chunk) /*override*/;

    // vIndex: 68
    virtual void fireEventPackPlayed(::PackInstance const& packInstance, uint priority) /*override*/;

    // vIndex: 53
    virtual void fireEventRespondedToAcceptContent(
        ::PacksInfoData const& data,
        bool                   accepted,
        bool                   downloadOptionalResourcePacks
    ) /*override*/;

    // vIndex: 1
    virtual void fireEventPackUpgradeAttempt(::PackManifest const& manifest, ::PackReport const& report) /*override*/;

    // vIndex: 219
    virtual void fireEventStackLoaded(::StackStats const& stats) /*override*/;

    // vIndex: 82
    virtual void firePackSettingsEvent(::PackSettings const& packSettings, ::PackManifest const& manifest) /*override*/;

    // vIndex: 67
    virtual void fireEventTreatmentPackApplied(::PackManifest const& manifest) /*override*/;

    // vIndex: 69
    virtual void fireEventTreatmentPackDownloadFailed(
        ::std::string productId,
        ::std::string packId,
        ::std::string versionNumber,
        ::std::string requiredTreatmentTag
    ) /*override*/;

    // vIndex: 70
    virtual void fireEventTreatmentPackDownloaded(
        ::std::string productId,
        ::std::string packId,
        ::std::string versionNumber,
        ::std::string requiredTreatmentTag
    ) /*override*/;

    // vIndex: 71
    virtual void fireEventTreatmentPackRemoved(::std::string packId) /*override*/;

    // vIndex: 55
    virtual void fireCDNDownloadEvent(
        ::std::string const&                                packId,
        ::std::string const&                                versionNumber,
        ::std::string const&                                hostUrl,
        ::IMinecraftEventing::CDNDownloadResult const&      downloadResult,
        ::IMinecraftEventing::CDNDownloadEventOrigin const& origin,
        float const&                                        elapsedTime
    ) /*override*/;

    // vIndex: 72
    virtual void
    fireEventContentLogsInWorldSession(::std::string const& logArea, uint errorCount, uint warningCount) /*override*/;

    // vIndex: 73
    virtual void fireEventEntitlementCacheLoadTimeout() /*override*/;

    // vIndex: 33
    virtual void fireTextToSpeechToggled(bool uiTTS, bool chatTTS) /*override*/;

    // vIndex: 151
    virtual void fireEventWorldLoadedClassroomCustomization(
        ::IMinecraftEventing::WorldClassroomCustomization                  customization,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) /*override*/;

    // vIndex: 152
    virtual void
    fireClassroomSettingUpdated(::ClassroomSetting classroomSetting, ::SettingsScreenMode settingMode) /*override*/;

    // vIndex: 153
    virtual void fireEventNpcPropertiesUpdated(::Actor& npcOwner, bool isEditorWorldbuilder) /*override*/;

    // vIndex: 154
    virtual void fireEventBoardTextUpdated(::ChalkboardBlockActor& board) /*override*/;

    // vIndex: 155
    virtual void fireEventCameraUsed(bool isSelfie) /*override*/;

    // vIndex: 156
    virtual void fireEventPortfolioExported(int imageCount, int captionedCount) /*override*/;

    // vIndex: 157
    virtual void fireQuickPlayEvent() /*override*/;

    // vIndex: 158
    virtual void firePermissionsSetEvent(
        ::PlayerPermissionLevel const  prevPlayerPermissionLevel,
        ::CommandPermissionLevel const prevCommandPermissionLevel,
        ::PlayerPermissionLevel const  playerPermissionLevel,
        ::CommandPermissionLevel const commandPermissionLevel
    ) /*override*/;

    // vIndex: 159
    virtual void fireExternalUriLaunched(::std::string const& uri) const /*override*/;

    // vIndex: 160
    virtual void fireUserGeneratedUriLaunched(::UserGeneratedUriSource source) const /*override*/;

    // vIndex: 161
    virtual void fireUserGeneratedUriLaunchFailed(
        ::UserGeneratedUriSource              source,
        ::Util::ResourceUri::ValidationStatus reasonCode,
        ::std::string const&                  additionalData
    ) const /*override*/;

    // vIndex: 162
    virtual void fireEventEmptyLibraryCategoryError(::std::string const& categoryTitle) const /*override*/;

    // vIndex: 163
    virtual void fireLibraryButtonPressed(
        ::std::string const& productId,
        ::std::string const& worldName,
        ::std::string const& buttonAction
    ) /*override*/;

    // vIndex: 164
    virtual void fireCourseButtonPressed(::std::string const& courseTitle, ::std::string const& courseId) /*override*/;

    // vIndex: 165
    virtual void fireLessonActionTaken(
        ::std::string const&                        lessonTitle,
        ::std::string const&                        lessonId,
        ::std::string const&                        courseId,
        ::IMinecraftEventing::EducationLessonAction buttonAction,
        int                                         score
    ) /*override*/;

    // vIndex: 166
    virtual void fireLessonProgressEvent(
        ::std::string const& lessonTitle,
        ::std::string const& lessonId,
        ::std::string const& courseId,
        ::std::string const& activityId,
        ::std::string const& action,
        int                  score
    ) /*override*/;

    // vIndex: 167
    virtual void fireShareButtonPressed(
        ::std::string const& location,
        ::EduShareUriType    shareType,
        ::EduShareMethodType methodType,
        bool                 includesResource
    ) /*override*/;

    // vIndex: 168
    virtual void fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint const entryPoint
    ) const /*override*/;

    // vIndex: 174
    virtual void fireEventEduiOSPurchaseTransaction(::TransactionStatus const& status) const /*override*/;

    // vIndex: 169
    virtual void fireInAppCodeBuilderActivated(::OpenCodeMethod method, ::std::string const& ideName) const
        /*override*/;

    // vIndex: 170
    virtual void fireInAppCodeBuilderDismissed(::std::string const& ideName) const /*override*/;

    // vIndex: 171
    virtual void fireCodeCommandButtonPressed() /*override*/;

    // vIndex: 172
    virtual void fireIDESelected(::std::string const& name) const /*override*/;

    // vIndex: 173
    virtual void fireEventEduResources() const /*override*/;

    // vIndex: 175
    virtual void fireEventCodeBuilderClosed() const /*override*/;

    // vIndex: 176
    virtual void fireEventCodeBuilderLog(
        ::Webview::TelemetryCommonProperties const& properties,
        ::std::string const&                        message,
        ::std::string&                              level
    ) const /*override*/;

    // vIndex: 177
    virtual void fireEventCodeBuilderScoreChanged(::std::string const& objective, int const score) const /*override*/;

    // vIndex: 179
    virtual void fireEventEduServiceStatus(
        ::std::string const&                                               serviceName,
        ::std::string const&                                               requestName,
        int                                                                durationMS,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) const /*override*/;

    // vIndex: 178
    virtual void fireEventCodeBuilderRuntimeAction(::std::string const& action) const /*override*/;

    // vIndex: 180
    virtual void
    fireEventWebviewDownload(::std::string const& downloadState, ::WebviewDownloadInfo const& downloadInfo) const
        /*override*/;

    // vIndex: 181
    virtual void fireEduServiceRequestFailed(
        ::std::string const&                                               serviceName,
        ::std::string const&                                               requestName,
        ::std::string const&                                               error,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) const /*override*/;

    // vIndex: 182
    virtual void fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) const /*override*/;

    // vIndex: 184
    virtual void fireEventOptionsChanged(
        ::std::string const&                            optionGroup,
        ::std::unordered_map<::std::string, int> const& events
    ) const /*override*/;

    // vIndex: 183
    virtual void fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) const /*override*/;

    // vIndex: 185
    virtual void fireEventTagButtonPressed(::std::string const& tag, bool showMore) const /*override*/;

    // vIndex: 186
    virtual void fireEventLevelDataOverride(::std::string_view valueName) const /*override*/;

    // vIndex: 187
    virtual void fireEventEduContentVerificationFailed() const /*override*/;

    // vIndex: 188
    virtual void fireEventLibrarySearch(::librarySearch::TelemetryData const& telemetryData) const /*override*/;

    // vIndex: 189
    virtual void fireEventLibrarySearchItemSelected(
        int const            sessionId,
        int const            correlationId,
        ::std::string const& productId,
        int const            row,
        int const            column
    ) const /*override*/;

    // vIndex: 190
    virtual void fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType updateType, double elapsedTimeSec) const
        /*override*/;

    // vIndex: 191
    virtual void fireEventWorldExported(int64 worldSeed, uint64 worldSize) /*override*/;

    // vIndex: 64
    virtual void fireEventWorldImported(int64 worldSeed, uint64 worldSize) /*override*/;

    // vIndex: 65
    virtual void fireEventWorldImportedResult(::FileArchiverOutcome importResult) /*override*/;

    // vIndex: 31
    virtual void
    fireGlobalResourcePackCrashRecovery(::PackInstance& packInstance, ::mce::UUID recoveryID, int order) /*override*/;

    // vIndex: 213
    virtual void fireEventRealmShared(
        ::std::string const&                   url,
        ::IMinecraftEventing::ShareMode const& mode,
        ::Realms::RealmId const&               worldId
    ) /*override*/;

    // vIndex: 214
    virtual void
    fireEventRealmMemberlistCleared(::Realms::RealmId const& worldId, int const& numberOfUsersRemoved) /*override*/;

    // vIndex: 215
    virtual void fireEventRealmUrlGenerated(::std::string const& url, ::Realms::RealmId const& worldId) /*override*/;

    // vIndex: 216
    virtual void fireEventStructureExport(
        ::glTFExportData const&             exportData,
        ::IMinecraftEventing::ExportOutcome outcome,
        ::IMinecraftEventing::ExportStage   stage
    ) const /*override*/;

    // vIndex: 217
    virtual void fireEventContentShared(
        ::std::string const&                   productId,
        ::std::string const&                   url,
        ::IMinecraftEventing::ShareMode const& mode
    ) /*override*/;

    // vIndex: 129
    virtual void fireMinecraftVersionLaunched(bool launchedLegacy) /*override*/;

    // vIndex: 130
    virtual void fireMinecraftVersionInviteAccepted(bool launchedLegacy, uint64 inviteGameOwner) /*override*/;

    // vIndex: 131
    virtual void fireInviteStatusReceived(::std::string id) /*override*/;

    // vIndex: 132
    virtual void fireInviteStatusSentImpl(uint userId, ::std::vector<::std::string> invitationIds) /*override*/;

    // vIndex: 133
    virtual void fireDayOneExperienceStateChanged(
        ::IMinecraftEventing::DayOneExperienceState newState,
        ::std::optional<uint>                       importedWorldIndex,
        ::std::optional<uint64>                     importedWorldTimestamp
    ) /*override*/;

    // vIndex: 134
    virtual void fireWorldConversionAttemptEvent(::Legacy::WorldConversionReport const& report) /*override*/;

    // vIndex: 135
    virtual void fireWorldConversionInitiatedEvent(::std::string const& converterVersion) /*override*/;

    // vIndex: 136
    virtual void fireWorldUpgradedToCnCPart2(
        bool                 willUpgrade,
        ::std::string const& baseGameVersion,
        ::Experiments const& experiments,
        ::std::string const& lastOpenedVersion,
        ::LevelSeed64        worldSeed,
        float                worldSizeMB
    ) /*override*/;

    // vIndex: 137
    virtual void fireEventAssertFailed(::std::string const& assertBucket, ::std::string const& message) /*override*/;

    // vIndex: 138
    virtual void fireEventCrashSystemFailedToInit() /*override*/;

    // vIndex: 139
    virtual void fireChatUsedEvent(uint chatLength, bool isSlashCommand) /*override*/;

    // vIndex: 140
    virtual void fireEventJoinByCode(::std::string const&) /*override*/;

    // vIndex: 34
    virtual void fireEventAppInitFileOpenStats(
        ::Core::Profile::FileCounters const& openForRead,
        ::Core::Profile::FileCounters const& openForWrite
    ) /*override*/;

    // vIndex: 35
    virtual void fireEventStartupPerformance(
        ::std::vector<::SerialWorkListLogEntry> const& preLoadingBar,
        ::std::vector<::SerialWorkListLogEntry> const& loadingBar,
        ::std::vector<::SerialWorkListLogEntry> const& postLoadingBar
    ) /*override*/;

    // vIndex: 36
    virtual void fireEventOnAppStart(::std::vector<::SerialWorkListLogEntry> const& performanceCountsAndTimings
    ) /*override*/;

    // vIndex: 37
    virtual void fireEventOnAppSuspend(
        ::std::vector<::SerialWorkListLogEntry> const& performanceCountsAndTimings,
        bool                                           forceDisableEvents
    ) /*override*/;

    // vIndex: 38
    virtual void fireEventOnAppResume(::std::vector<::SerialWorkListLogEntry> const& performanceCountsAndTimings
    ) /*override*/;

    // vIndex: 39
    virtual void fireEventOnDeviceLost(::std::vector<::SerialWorkListLogEntry> const& performanceCountsAndTimings
    ) /*override*/;

    // vIndex: 256
    virtual void fireEventRealmDownload(
        ::std::string const& correlationId,
        ::std::string const& downloadStage,
        int const            errorCode,
        int const            realmId,
        int const            fileSizeKB
    ) /*override*/;

    // vIndex: 257
    virtual void fireEventRealmUpload(
        ::std::string const& correlationId,
        ::std::string const& uploadStage,
        int const            errorCode,
        int const            realmId,
        int const            fileSizeKB,
        bool const           isPack
    ) /*override*/;

    // vIndex: 74
    virtual void fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow
    ) /*override*/;

    // vIndex: 258
    virtual void fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow
    ) /*override*/;

    // vIndex: 259
    virtual void fireRealmConnectionEventRealmAPIResponse(
        ::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow,
        int                                       responseCode
    ) /*override*/;

    // vIndex: 75
    virtual void fireRealmConnectionEventGenericLambdaCalled(
        ::IMinecraftEventing::RealmConnectionFlow   realmConnectionFlow,
        ::IMinecraftEventing::RealmConnectionLambda realmConnectionLambda,
        ::IMinecraftEventing::RealmConnectionResult realmConnectionResult
    ) /*override*/;

    // vIndex: 93
    virtual void fireIgnoredNotificationsEvent(
        ::IMinecraftEventing::IgnoredNotificationsType              notificationType,
        int                                                         notificationCount,
        ::std::set<::IMinecraftEventing::IgnoredNotificationSource> notificationSources
    ) /*override*/;

    // vIndex: 95
    virtual void fireClubsOpenFeedScreenEvent(
        ::IMinecraftEventing::ClubsFeedScreenSource const source,
        ::Realms::RealmId const                           realmId,
        ::std::string const&                              clubId,
        int                                               unreadPosts
    ) /*override*/;

    // vIndex: 94
    virtual void fireClubsEngagementEvent(
        ::IMinecraftEventing::ClubsEngagementAction     action,
        ::IMinecraftEventing::ClubsEngagementTargetType engagementTargetType,
        char const*                                     target,
        ::Realms::RealmId const                         realmId,
        ::std::string const&                            clubId
    ) /*override*/;

    // vIndex: 243
    virtual void fireEventCopyWorldEducationEnabled() /*override*/;

    // vIndex: 80
    virtual void fireEventRespawn(::Player& player, int dimID) /*override*/;

    // vIndex: 81
    virtual void
    fireEventServerRespawnSearchTime(::Player& player, ::PlayerRespawnTelemetryData const& data) /*override*/;

    // vIndex: 220
    virtual void fireEventUnknownBlockReceived(::NewBlockID const& blockId, ushort data) /*override*/;

    // vIndex: 76
    virtual void fireEventCompoundCreatorCreated(int compoundId, int count) /*override*/;

    // vIndex: 204
    virtual void fireEventLabTableCreated(int reactionId, int productId, int productAux) /*override*/;

    // vIndex: 77
    virtual void fireEventElementConstructorUsed(
        int                                             atomicNumber,
        int                                             count,
        ::IMinecraftEventing::ElementConstructorUseType useType
    ) /*override*/;

    // vIndex: 79
    virtual void fireEventReducerBlockEntered(::ItemDescriptor const& item) /*override*/;

    // vIndex: 264
    virtual void fireEventMultiplayerSessionUpdate(::Bedrock::NonOwnerPointer<::MultiPlayerLevel> level) /*override*/;

    // vIndex: 265
    virtual void fireEventLevelDestruct() /*override*/;

    // vIndex: 266
    virtual void flagEventDeepLink() /*override*/;

    // vIndex: 267
    virtual void flagEventPlayerGameTypeDefault(bool isDefault) /*override*/;

    // vIndex: 268
    virtual void fileEventCloudWorldPullFailed(
        ::std::string const& reason,
        ::std::string const& worldID,
        bool                 localLevelDatUsed
    ) /*override*/;

    // vIndex: 269
    virtual void
    fireEventLevelDatLoadFailed(::std::string const& reason, ::std::string const& worldID, bool isFatal) /*override*/;

    // vIndex: 270
    virtual void fireEventWorldCorruptionCausedWorldShutdown(
        ::LevelStorageEventingContext const& context,
        ::std::string const&                 reason,
        ::std::optional<bool>                isOutOfDiskSpace
    ) /*override*/;

    // vIndex: 271
    virtual void
    fireEventClientLeftGameDueToUnrecoverableError(::std::string const& reason, bool isServer) /*override*/;

    // vIndex: 272
    virtual void fireEventServerShutdownDueToError(::std::string const& reason) /*override*/;

    // vIndex: 273
    virtual void fireEventDBStorageSizeSnapshot(
        ::LevelStorageEventingContext const& context,
        ::DBStorageFolderWatcher const&      folderWatcher,
        ::DBStorageFolderWatcherSnapshotKind kind
    ) /*override*/;

    // vIndex: 289
    virtual void fireEventWorldHistoryPackSourceMissingDuringUpgrade(
        ::std::string const& worldPath,
        ::std::string const& levelId,
        ::std::string const& deletionCandidate
    ) /*override*/;

    // vIndex: 290
    virtual void fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        ::StructureTelemetryClientData const*          telemetryClientData
    ) /*override*/;

    // vIndex: 291
    virtual void fireStructureBlockRedstoneActivated(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        ::StructureTelemetryClientData const*          telemetryClientData
    ) /*override*/;

    // vIndex: 274
    virtual void fireEventSidebarNavigation(
        uint const&          userId,
        ::std::string const& layoutType,
        ::std::string const& telemetryId,
        int const            depthLevel,
        bool const           isSelected,
        bool const           areChildrenVisible,
        bool const           hasChildren
    ) /*override*/;

    // vIndex: 275
    virtual void fireEventSidebarVerboseToggled(
        uint const&          userId,
        ::std::string const& layoutType,
        ::std::string const& verboseNavigationType,
        bool const           verboseState
    ) /*override*/;

    // vIndex: 276
    virtual void fireEventPersonaUserLoadedActive(
        ::std::string const& personaProfileName,
        ::std::string const& classicSkinId,
        bool                 personaUsesClassicSkin
    ) /*override*/;

    // vIndex: 277
    virtual void fireEventPersonaItemPreviewed(
        ::std::string const&                personaProfile,
        ::std::string const&                itemOfferId,
        ::std::string const&                productId,
        uint                                row,
        uint                                column,
        ::IMinecraftEventing::PromotionType promotionType,
        bool                                isOwned,
        ::std::string const&                creatorId,
        ::std::string const&                creatorName,
        double                              secondsToLoadContent,
        ::IMinecraftEventing::StoreType     storeType
    ) /*override*/;

    // vIndex: 278
    virtual void fireEventPersonaSkinChanged(
        ::std::string const& personaProfile,
        ::std::string const& classicSkinId,
        bool                 isClassicSkinUsed
    ) /*override*/;

    // vIndex: 279
    virtual void fireEventPersonaAvatarUpdated(
        ::std::string const&                personaProfile,
        ::std::vector<::std::string> const& newAppearancePieceIds,
        ::std::vector<bool> const&          newPieces,
        ::std::vector<bool> const&          tintedPieces,
        bool                                isNewPersona,
        bool                                isBeingDeleted,
        ::std::string const&                bodySize,
        ::std::string const&                armSize,
        ::std::string const&                classicSkinId,
        bool                                usesClassicSkin,
        ::std::vector<::std::string> const& emotesPieceIds,
        ::std::vector<::std::string> const& emoteSlotNumbers
    ) /*override*/;

    // vIndex: 280
    virtual void fireEventPersonaAvatarsListed(::std::vector<::std::string> const& profileTypesUsed) /*override*/;

    // vIndex: 281
    virtual void fireEventPersonaEmotePlayed(
        ::std::string const& emoteProductId,
        bool                 isEmoteEndedEarly,
        int                  emoteSlotId
    ) /*override*/;

    // vIndex: 282
    virtual void fireEventDefaultCastSelected(
        int                  previewIndex,
        ::mce::UUID          appearanceId,
        ::std::string const& appearanceName
    ) /*override*/;

    // vIndex: 283
    virtual void fireEventPersonaInitalizationEvent(
        uint                 secondsToCompletion,
        ::std::string const& status,
        ::std::string const& user
    ) /*override*/;

    // vIndex: 284
    virtual void
    fireEventPersonaGeneralError(::std::string const& personaErrorName, uint duplicateErrorsFired) /*override*/;

    // vIndex: 285
    virtual void fireEventPersonaLoadingPieces(uint piecesLoaded, double timeToLoadInSeconds) /*override*/;

    // vIndex: 286
    virtual void fireEventPersonaStillLoading(
        bool                                isSignedIn,
        bool                                selectedSkinInitialized,
        bool                                isStillSyncingWithService,
        bool                                isRepoStillBuildingAppearances,
        bool                                isPendingSkinStillLoading,
        bool                                isRefreshingEntitlements,
        bool                                isUserUpdateInProgress,
        bool                                isSelectedSkinLoaded,
        ::std::vector<::std::string> const& failingPersonaProfiles,
        int                                 unknownPersonasCount,
        double                              timeElapsed
    ) /*override*/;

    // vIndex: 287
    virtual void fireEventPersonaCreationFailed(
        ::std::string const& errorName,
        ::std::string const& pieceId,
        bool                 missingTop,
        bool                 missingBottom,
        ::std::string const& repositoryPieceType,
        ::std::string const& appearancePieceType
    ) /*override*/;

    // vIndex: 288
    virtual void fireEventPersonaCategoryInformation(::std::string const& categoryInformation) /*override*/;

    // vIndex: 292
    virtual void fireEventOreUIError(uint const& userId, ::std::string const& errorType) /*override*/;

    // vIndex: 293
    virtual void
    fireEventOreUIScreenPerformance(uint const& userId, ::OreUI::DataTracker const& dataTracker) /*override*/;

    // vIndex: 294
    virtual void fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool const           isOwner
    ) /*override*/;

    // vIndex: 295
    virtual void fireEventOnboardingWorldCreationUsage(
        bool onboardingWorldCreationUsed,
        bool hasWorlds,
        bool hasOnlyBaseGamePacks
    ) /*override*/;

    // vIndex: 296
    virtual void fireEventVRModeChanged(bool const isVRModeEnabled) /*override*/;

    // vIndex: 299
    virtual ::std::shared_ptr<void*> requestEventDeferment() /*override*/;

    // vIndex: 300
    virtual ::gsl::not_null<::Bedrock::CrashTelemetryProcessor*> getCrashTelemetryProcessor() /*override*/;

    // vIndex: 1
    virtual void sendCrashTelemetryNow(::std::shared_ptr<::Bedrock::SessionInfo> session) /*override*/;

    // vIndex: 2
    virtual void addCrashTelemetryToBatch(::std::shared_ptr<::Bedrock::SessionInfo> session) /*override*/;

    // vIndex: 3
    virtual void sendBatchedCrashTelemetry() /*override*/;

    // vIndex: 4
    virtual void sendCrashStatusTelemetry(::Bedrock::CrashUploadStatus const& status) /*override*/;

    // vIndex: 301
    virtual void fireEventLevelChunkPerformanceData(bool isClientSide) /*override*/;

    // vIndex: 302
    virtual void fireChunkRecyclerTelemetryData(::ChunkRecyclerTelemetryOutput const& output) /*override*/;

    // vIndex: 303
    virtual void
    fireEventActorValueValidationFailed(::std::string const& invalidValue, char const* caller) /*override*/;

    // vIndex: 1
    virtual void fireScreenLoadTimeUpdateEvent(
        uint const&                userId,
        ::std::string const&       screenName,
        ::std::chrono::nanoseconds duration,
        ::std::string const&       loadInstanceId
    ) /*override*/;

    // vIndex: 304
    virtual void
    fireDBStorageError(::LevelStorageEventingContext const& context, ::std::string const& errorType) /*override*/;

    // vIndex: 319
    virtual void fireStorageMigrationEvent(
        bool                                              isSuccessful,
        ::Bedrock::StorageMigration::StorageMigrationType migrationType,
        int                                               numFilesMigrated,
        int                                               numFilesTotal,
        ::std::chrono::nanoseconds                        duration,
        ::std::string const&                              failureReason
    ) /*override*/;

    // vIndex: 320
    virtual void fireEventConnectedStorageResult(
        ::ConnectedStorageEventType eventType,
        bool                        succeeded,
        uint                        durationMs,
        ::std::optional<uint>       chunksSent,
        ::std::string const&        errorMessage,
        ::std::string const&        levelId,
        int64                       quotaRemaining,
        ::std::optional<uint>       filesToAddCount,
        ::std::optional<uint>       filesToDeleteCount,
        ::std::optional<uint>       HACK_oldFilesToDeleteCount
    ) /*override*/;

    // vIndex: 321
    virtual void fireEventConnectedStorageError(
        char const*          message,
        ::std::string const& levelId,
        int64                quotaRemaining
    ) /*override*/;

    // vIndex: 305
    virtual void fireServerStarted(
        ::IMinecraftEventing::ServerType                          serverType,
        ::std::string const&                                      serverId,
        ::std::unordered_map<::std::string, ::std::string> const& propertiesChanged
    ) /*override*/;

    // vIndex: 306
    virtual void fireServerShutdown(::std::string const& serverId) /*override*/;

    // vIndex: 307
    virtual void fireSafetyServiceTextProcessEvent(
        ::std::string const&        authorId,
        ::TextProcessingEventOrigin eventOrigin,
        ushort                      responseCode,
        ::std::string const&        message,
        bool                        wasFlagged,
        double                      responseTime,
        char                        risk,
        char                        trustLevel,
        ::Json::Value const&        events,
        bool                        isProcessorOffline,
        bool                        isCachedResponse
    ) /*override*/;

    // vIndex: 308
    virtual void firePassthroughTextProcessEvent(
        ::std::string const&        authorId,
        ::TextProcessingEventOrigin eventOrigin,
        ::std::string const&        message
    ) /*override*/;

    // vIndex: 309
    virtual void fireBannedSkinVerificationEvent(
        uint const&          userId,
        ::std::string const& serverType,
        ::std::string const& skinData,
        bool                 wasApproved,
        int const            eventCode,
        ::std::string const& message
    ) /*override*/;

    // vIndex: 310
    virtual void fireEventPlayerReportSent(
        bool                 successfulReportSent,
        ::std::string const& failureSource,
        ::std::string const& failureReason,
        ::std::string const& reportID
    ) /*override*/;

    // vIndex: 311
    virtual void fireEventOneDSPlayerReportPayload(
        ::std::string const& reportPayloadJson,
        ::std::string const& reportID
    ) /*override*/;

    // vIndex: 316
    virtual void firePlayerAccountMetadata(
        ::Social::PermissionCheckResult multiPlayerAllowed,
        ::Social::PermissionCheckResult chatAllowed,
        ::Social::PermissionCheckResult addFriendAllowed,
        ::Social::PermissionCheckResult ugcAllowed,
        ::Social::PermissionCheckResult clubsAllowed,
        ::Social::PermissionCheckResult viewProfilesAllowed,
        bool                            isChildAccount,
        bool                            isGuest
    ) /*override*/;

    // vIndex: 312
    virtual void fireEventSafetyHTTPRequest(
        ::std::string const& method,
        ::std::string const& url,
        int const            responseCode
    ) /*override*/;

    // vIndex: 313
    virtual void fireEventProfanityFilter(bool localFilter, bool remoteFilter, bool playerFilter) /*override*/;

    // vIndex: 314
    virtual void fireEventChatFloodingActionTaken(
        ::std::string const&         authorXuid,
        ::Safety::ChatFloodingAction action,
        ::std::string const&         message
    ) /*override*/;

    // vIndex: 315
    virtual void
    fireEventTextProcessorStartupFailed(::std::string const& stage, int retryCount, int maxRetryCount) /*override*/;

    // vIndex: 317
    virtual void fireEventBlockUser(::std::string const& xuid, bool isSuccess, bool isBlocked) /*override*/;

    // vIndex: 318
    virtual void fireEventMuteUser(::std::string const& xuid, bool isSuccess, bool isMuted) /*override*/;

    // vIndex: 1
    virtual void fireWorldRecoveryTelemetryEvent(::Bedrock::WorldRecoveryTelemetryEvent const& data) /*override*/;

    // vIndex: 21
    virtual ::Json::Value propertiesAsJsonValue() const /*override*/;

    // vIndex: 322
    virtual void fireEventUwpToGdkMigrationComplete(
        ::Bedrock::DeviceIdContext const& deviceIdContext,
        ::std::string const&              gdkDeviceId
    ) /*override*/;

    // vIndex: 323
    virtual void fireNetworkChangedEvent(::std::string const& networkConnectionType) /*override*/;

    // vIndex: 324
    virtual void fireEventMessageServiceImpression(
        ::std::string const& messageId,
        ::std::string const& messageSessionId,
        ::std::string const& Surface,
        ::std::string const& Template,
        bool const           isControl
    ) /*override*/;

    // vIndex: 325
    virtual void fireEventMessageReceived(
        ::std::string const& messageId,
        ::std::string const& messageSessionId,
        ::std::string const& Surface,
        ::std::string const& Template,
        bool const           isControl
    ) /*override*/;

    // vIndex: 326
    virtual void fireEventGoogleAccountHoldWarning(bool navigatedToSubscription) /*override*/;

    // vIndex: 327
    virtual void fireDelayedEventReportOfflineAction(::std::string const& offlineAction) /*override*/;

    // vIndex: 328
    virtual void fireEventFeedbackSubmitted(
        ::std::string const& productId,
        bool                 safetyCheckSuccessful,
        bool                 isValidText
    ) /*override*/;

    // vIndex: 329
    virtual void fireEventPlayerActionComparisonFailed(::std::string const& message) /*override*/;

    // vIndex: 330
    virtual void
    fireEventTrackDeeplinks(::std::string const& deeplinkDestination, ::std::string const& deeplinkSource) /*override*/;

    // vIndex: 331
    virtual void
    fireEventVehiclePositionComparisonFailed(::Vec3 const& clientPos, ::Vec3 const& serverPos) /*override*/;

    // vIndex: 332
    virtual void
    firePlayerUnexpectedFallDamage(float const fallDistance, bool isVehicle, float const divergenceAmount) /*override*/;

    // vIndex: 333
    virtual void fireEventActorMovementCorrectionDivergence(
        ::ActorType                 actorType,
        ::std::vector<float> const& divergences
    ) /*override*/;

    // vIndex: 334
    virtual void fireEventDedicatedServerDiscoveryResponse(int const status, int const retryAttempt) /*override*/;

    // vIndex: 335
    virtual void
    fireEventGameTip(int gameTipId, int gameTipEventType, int gameTipTestGroup, ::InputMode inputMode) /*override*/;

    // vIndex: 336
    virtual void fireEventAddedFriend(
        ::std::string const&                      addedXuid,
        ::IMinecraftEventing::AddedFriendLocation location,
        bool                                      success
    ) /*override*/;

    // vIndex: 337
    virtual void fireEventInboxSummary(::Social::Events::InboxSummaryData const& data) /*override*/;

    // vIndex: 338
    virtual void fireEventTrialStatusFailed(int errorCode) /*override*/;

    // vIndex: 339
    virtual void
    fireEventSaveDataExpansion(uint64 preExpansionSize, uint64 postExpansionSize, uint64 levelUsedSize) /*override*/;

    // vIndex: 340
    virtual void fireEventProfileButtonPressed(::std::string const& entryPoint) const /*override*/;

    // vIndex: 341
    virtual void fireEventWorldCopy(uint64 worldSize, uint64 filesSum, ::LevelSeed64 worldSeed) /*override*/;

    // vIndex: 342
    virtual void fireEventWriteBudgetLow(
        uint64                     remainingWriteBudget,
        float                      writeRateMBPerMin,
        ::std::chrono::nanoseconds timeSinceLastLargeFileTransactionCompleted,
        bool                       anyLargeFileTransactionInProgress,
        ::std::string const&       correlationId
    ) /*override*/;

    // vIndex: 343
    virtual void fireEventWriteBudgetReplenished(
        ::std::chrono::nanoseconds throttledTime,
        uint64                     lowestWriteBudget,
        ::std::optional<uint64>    lowestSystemThrottlingPerSec,
        ::std::chrono::nanoseconds timeSinceLastLargeFileTransactionCompleted,
        bool                       anyLargeFileTransactionInProgress,
        ::std::string const&       correlationId
    ) /*override*/;

    // vIndex: 344
    virtual void fireEventLargeFileWriteStall(
        uint64                              totalWriteSizeBytes,
        ::std::vector<::std::string> const& largestFileNames,
        ::std::chrono::nanoseconds          estimatedTotalWriteTime,
        ::std::chrono::nanoseconds          estimatedTotalWaitTime,
        ::std::string const&                originatingSystem,
        uint64                              budgetBytesAtStartOfOperation,
        bool                                operationWasCancelled,
        ::std::chrono::nanoseconds          totalWriteTime,
        ::std::chrono::nanoseconds          totalWaitTime,
        int                                 numberOfFilesWritten,
        uint64                              budgetBytesAtEndOfOperation,
        ::std::vector<::std::string> const& associatedContentIDs
    ) /*override*/;

    // vIndex: 345
    virtual void fireEventLowMemoryDetected(::LowMemoryReport const& report) /*override*/;

    // vIndex: 12
    virtual ::Social::Events::EventManager& getEventManager() const /*override*/;

    // vIndex: 10
    virtual uint getPrimaryLocalUserId() const /*override*/;

    // vIndex: 7
    virtual bool getShouldHaveAchievementsEnabled() /*override*/;

    // vIndex: 8
    virtual void setShouldHaveAchievementsEnabled(bool value) /*override*/;

    // vIndex: 9
    virtual bool getAchievementsAlwaysEnabled() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MinecraftEventing(::Core::Path const& logFileDir);

    MCAPI void _addCommonPurchaseEventProperties(
        ::Social::Events::Event& purchaseEvent,
        ::std::string const&     correlationId,
        ::std::string const&     storeId,
        ::std::string const&     productId,
        ::PurchasePath           path
    ) const;

    MCAPI ::std::string _convertPurchasePathToString(::PurchasePath path) const;

    MCAPI void _fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        bool                                           redstoneActivated,
        ::StructureTelemetryClientData const*          telemetryClientData
    );

    MCAPI void _generateWorldSessionId();

    MCAPI void _sendTelemetryHeartbeat(char const* trigger);

    MCAPI void fireEventPlayerMessage(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message,
        ::std::string const& messageType
    );

    MCAPI void firePlayerTelemetryEvent(::Social::Events::PlayerTelemetry const& playerTelemetry);

    MCAPI void init(::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform);

    MCAPI void
    initForDedicatedServer(::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform, bool eventRecordingEnabled);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void fireEventAwardAchievement(::Player* player, ::MinecraftEventing::AchievementIds achievementId);

    MCAPI static void fireEventBehaviorErrored(::Player* player, ::std::string const& errorMessage);

    MCAPI static void fireEventBehaviorFailed(::Player* player, ::std::string const& failureMessage);

    MCAPI static void fireEventBellBlockUsed(::Player* player, ::std::string const& itemUsed);

    MCAPI static void fireEventBlockBroken(
        ::Player*                                 player,
        ::Block const&                            destroyedBlock,
        ::MinecraftEventing::BlockPlacementMethod method,
        int                                       variantData
    );

    MCAPI static void fireEventBlockFound(::Player* player, ::BlockPos const& blockPos);

    MCAPI static void fireEventCampfireBlockUsed(
        ::Player*                                    player,
        ::std::string const&                         itemUsed,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    );

    MCAPI static void fireEventCaravanChanged(::Mob& mob, int caravanSize);

    MCAPI static void fireEventItemUsed(::Player* player, ::ItemDescriptor const& item, ::ItemUseMethod useMethod);

    MCAPI static void fireEventJukeboxUsed(::Player* player, ::ItemDescriptor const& disc, ::std::string const& biome);

    MCAPI static void fireEventMobDied(::Mob& mob, int causeOfDeath);

    MCAPI static void fireEventMobEffectChanged(
        ::Mob&                          mob,
        ::MobEffectInstance const&      effectInstance,
        ::MinecraftEventing::ChangeType change
    );

    MCAPI static void fireEventMobTeleportedToOwner(::Mob& mob);

    MCAPI static void fireEventPlayerTeleported(
        ::Player*                               player,
        float                                   metersTravelled,
        ::MinecraftEventing::TeleportationCause cause,
        int                                     sourceType
    );

    MCAPI static void fireEventPlayerTransform(::Player& player);

    MCAPI static void fireEventSlashCommandExecuted(
        ::Player*            player,
        ::std::string const& commandName,
        int                  successCount,
        int                  errorCount,
        ::std::string const& errorList
    );

    MCAPI static void fireEventWolfArmorDamageValueChanged(
        ::Actor&                owner,
        ::ItemDescriptor const& item,
        int                     oldDamageValue,
        int                     newDamageValue
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::Social::Events::AchievementEventing>& mAchievementEventing();

    MCAPI static ::std::map<::std::string, int>& mCachedUUIDs();

    MCAPI static ::std::unordered_map<uint, ::Social::Events::PlayerTelemetry>& mPlayerTelemetry();

    MCAPI static ::Social::Events::RealtimeRoute& mRealtimeRoute();

    MCAPI static ::Social::Events::ScreenFlow& mScreenFlow();

    MCAPI static ::Bedrock::Threading::Mutex& sHeartbeatMutex();

    MCAPI static ::Bedrock::Threading::Mutex& sMutex();

    MCAPI static ::Bedrock::Threading::Mutex& sPlayerTelemetryMutex();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path const& logFileDir);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init(
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const& userManager,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&             appPlatform
    );

    MCAPI void $initDeviceAndSessionIds();

    MCAPI void $initEditorEventListener();

    MCAPI void $shutdown();

    MCAPI void $updatePrimaryLocalUserId(uint const& userId);

    MCAPI void $registerSecondaryUserCommonProperties(uint const& userId, ::Social::Identity& identity) const;

    MCAPI void $unregisterSecondaryUserCommonProperties(uint const& userId) const;

    MCAPI void $updateIsLegacyPlayer(bool isLegacyPlayer);

    MCAPI void $updateIsTrial(bool isTrial) const;

    MCAPI void $updateEditionType();

    MCAPI void $addListener(::std::unique_ptr<::Social::Events::IEventListener> listener);

    MCAPI void $clearListeners();

    MCAPI void $registerOptionsObserver(::std::shared_ptr<::Options> options);

    MCAPI void $setTestBuildIdTag(char const* id);

    MCAPI void $removeTestBuildIdTag();

    MCAPI void $setTestTelemetryTag(char const* name);

    MCAPI void $removeTestTelemetryTag();

    MCAPI void $stopDebugEventLoggingForAllListeners();

    MCAPI void $tick();

    MCAPI void $forceSendEvents();

    MCAPI ::std::string $getSessionId();

    MCAPI ::std::string const& $getPlayerSessionId();

    MCAPI ::std::chrono::steady_clock::time_point $getWorldSessionIdGenerationTimestamp() const;

    MCAPI void $fireEventDefaultGameTypeChanged(::GameType oldGameType, ::GameType newGameType);

    MCAPI void $fireEventWorldLoaded(
        ::Player*            player,
        ::std::string const& personaSlot,
        ::std::string const& classicSkinId,
        bool                 usingClassicSkin
    );

    MCAPI void $fireEventArmorStandItemEquipped(::ArmorStand const& armorStand, ::ItemDescriptor const& item);

    MCAPI void $fireEventLockedItemGiven();

    MCAPI void $tryFireEventProgressLoadTimes(
        ::std::string const&                                   calledFromScreen,
        ::std::vector<::std::pair<::std::string, float>> const progressHandlerLoadTimes
    );

    MCAPI void $fireEventBlockPlacedByCommand(::Block const& placedBlock, int numberOfBlocksPlaced);

    MCAPI void $fireEventEntitySpawned(::Player* player, int mobType, uint spawnMethod);

    MCAPI void $fireEventDevSlashCommandExecuted(::std::string const& commandName, ::std::string const& command);

    MCAPI void $fireCommandParseTableTelemetry(
        bool const                                                         isServer,
        ::std::vector<::IMinecraftEventing::CommandParseTableEntry> const& parseTableDetails
    ) const;

    MCAPI void $fireEventPlayerTravelled(::Player* player, float metersTravelledSinceLastEvent);

    MCAPI void $fireEventPlayerBounced(::Player* player, ::Block const& block, int bounceHeight);

    MCAPI void $fireEventPlayerDamaged(::Player* player, ::ActorDamageCause damageCause);

    MCAPI void $fireEventSetValidForAchievements(::Player* player, bool currentlyValidForAchievements);

    MCAPI void $fireEventAchievementReceived(
        ::std::string const& title,
        ::std::string const& description,
        ::std::string const& achievementId
    );

    MCAPI void $updatePlayerUndergroundStatus(::Player* player, bool const isUnderground);

    MCAPI void $fireEventPlayerAttemptingExploit(::Player* player, ::IMinecraftEventing::ExploitType exploitType);

    MCAPI void
    $fireEventWorldGenerated(::std::string const& levelId, ::LevelSettings const& levelSettings, bool fromTemplate);

    MCAPI void $fireEventMultiplayerClientConnectionStateChanged(
        ::std::string const& connectionType,
        uint                 fromState,
        uint                 toState,
        uint                 port,
        ::std::string const& status
    );

    MCAPI void $fireEventJoinCanceled(::LoadingState currentState);

    MCAPI void $fireEvent(
        ::std::string const&                                eventName,
        ::std::vector<::Social::Events::Property> const&    properties,
        ::std::vector<::Social::Events::Measurement> const& measurements,
        bool                                                shouldAggregate
    );

    MCAPI void $fireEventBlockTypeRegistryChecksumMismatch(
        ::std::string const& reason,
        uint64 const&        serverBlockChecksum,
        uint64 const&        clientBlockChecksum,
        ::std::string const& serverVersion
    );

    MCAPI void $fireEventOnSuccessfulClientLogin(::MultiPlayerLevel const* level);

    MCAPI void $fireEventStartWorld(
        ::IMinecraftEventing::NetworkType            networkType,
        ::std::string const&                         ipAddress,
        ::Social::MultiplayerServiceIdentifier const friendWorldType
    );

    MCAPI void $fireEventSignalServiceConnect(
        ::SignalServiceConnectStage stage,
        bool                        bIsSigningInAsHost,
        ::std::string const&        stageProperties,
        uint64                      netherNetId,
        ::std::string const&        correlationId
    );

    MCAPI void $fireEventConnectionFailed(::IConnectionEventing::ConnectionFailureReason failure);

    MCAPI void $fireEventHttpClientError(::std::string const& error);

    MCAPI void $fireEventSignInToIdentity(
        ::IMinecraftEventing::SignInAccountType accountType,
        ::Social::IdentitySignInTrigger         trigger,
        ::std::string const&                    signInSource,
        bool                                    signInUIShown,
        ::IMinecraftEventing::SignInStage       stage,
        ::Social::SignInResult                  result,
        int                                     retryCount,
        ::Social::PlayerIDs                     ids,
        ::std::string const&                    errorCode
    );

    MCAPI void $fireEventSignOutOfIdentity(
        ::IMinecraftEventing::SignInAccountType accountType,
        ::Social::IdentitySignInTrigger         trigger,
        ::std::string const&                    accountId,
        ::std::string const&                    errorCode
    );

    MCAPI void $fireEventCloudOperationStartedEdu(
        ::EduCloudUtils::Operation const      operation,
        ::std::string const&                  cloudCorrelationId,
        uint64 const                          size,
        ::std::optional<::std::string> const& driveItemId
    );

    MCAPI void $fireEventCloudOperationEndedEdu(
        ::EduCloudUtils::Operation const      operation,
        ::std::string const&                  cloudCorrelationId,
        ::std::chrono::milliseconds const     elapsedTime,
        uint const                            status,
        uint64 const                          size,
        ::std::optional<::std::string> const& driveItemId,
        ::std::optional<::std::string> const& errorCode,
        ::std::optional<::std::string> const& errorMessage,
        ::std::optional<::std::string> const& error
    );

    MCAPI void $fireEventCloudMyWorldsSummary(
        int const totalWorldsCount,
        int const placeholderCount,
        int const needsUploadCount,
        int const ctagMismatchCount,
        int const conflictCount
    );

    MCAPI void $fireEventCloudConflictCheckEdu(
        ::std::string const&                       cloudCorrelationId,
        ::EduCloud::ConflictResolutionStatus const conflictStatus
    );

    MCAPI void $fireEventPopupFiredEdu(
        ::std::string const&          mutsUserId,
        ::std::string const&          dialogType,
        ::std::string const&          experienceId,
        ::std::string const&          title,
        ::ActiveDirectoryAction const postAction
    );

    MCAPI void $fireEventPlayIntegrityCheck(
        ::std::string const& result,
        ::std::string const& appRecognitionVerdict,
        ::std::string const& deviceIntegrity,
        ::std::string const& appLicensingVerdict
    );

    MCAPI void $fireServerConnectionEvent(
        ::IConnectionEventing::ServerConnectionOutcome outcome,
        uint                                           pingLatency,
        double                                         timeElapsed,
        ::std::string const&                           creatorName,
        ::std::string const&                           worldId
    );

    MCAPI void $fireServerConnectionAttemptEvent(
        ::std::string const& creatorName,
        bool                 isTransfer,
        ::std::string const& serverAddress
    );

    MCAPI void $fireEventScriptPluginDiscovery(::ScriptPluginResult const& pluginResult, bool client);

    MCAPI void $fireEventScriptPluginRun(
        ::ScriptPluginResult const& pluginResult,
        ::std::chrono::microseconds runDuration,
        bool                        client
    );

    MCAPI void $fireEventScriptDebuggerListen(bool client, bool autoAttach);

    MCAPI void $fireEventScriptDebuggerConnect(bool client, bool autoAttach, int retries);

    MCAPI void $fireEditorEventToolActivated(::std::string const& toolName);

    MCAPI void $fireEditorUndo(::std::string const& transactionName);

    MCAPI void $fireEditorRedo(::std::string const& transactionName);

    MCAPI void $fireEditorScriptAction(
        ::std::string const& scriptSource,
        ::std::string const& actionName,
        ::std::string const& actionMetadata
    );

    MCAPI void $fireEventStartClient(::std::string const& ipAddress);

    MCAPI void $fireEventHardwareInfo();

    MCAPI void $fireEventDeviceLost();

    MCAPI void $fireEventRenderingSizeChanged();

    MCAPI void $fireEventDiskStatus(::DiskStatus status, ::Core::LevelStorageState errorCode, uint64 freeSpace);

    MCAPI void $fireEventStorageAreaFull(
        ::std::string const&                            areaPath,
        ::std::vector<::Bedrock::DirectoryEntry> const& diskSizeData
    );

    MCAPI void $fireEventAppPaused();

    MCAPI void $fireEventAppUnpaused();

    MCAPI void $fireEventAppSurfaceCreated();

    MCAPI void $fireEventAppSurfaceDestroyed();

    MCAPI void $fireEventPurchaseGameAttempt(
        ::std::string const& storeId,
        ::std::string const& activeTab,
        ::std::string const& productId
    );

    MCAPI void $fireEventPurchaseGameResult(int purchaseResult);

    MCAPI void $fireEventTrialDeviceIdCorrelation(
        int64                myTime,
        ::std::string const& theirId,
        int64                theirTime,
        ::std::string const& theirLastSessionId
    );

    MCAPI void $fireEventDeviceIdManagerFailOnIdentityGained();

    MCAPI void $fireEventDlcStorageFull(
        ::std::string const& productId,
        uint64               dlcSize,
        uint64               onDiskScratchSpace,
        uint64               scratchSpace,
        uint64               premiumSpace
    );

    MCAPI void $fireEventPushNotificationPermission(bool permission, ::std::string const& deviceId);

    MCAPI void $fireEventPushNotificationReceived(::PushNotificationMessage const& msg);

    MCAPI void $fireEventPushNotificationOpened(::std::string const& threadId, ::std::string const& deepLink);

    MCAPI void $firePerfTestEvent(
        ::std::string const&                                    testArtifact,
        ::std::string const&                                    modelName,
        ::std::string const&                                    renderSize,
        uint                                                    renderDistance,
        uint                                                    simDistance,
        ::std::string const&                                    memorySize,
        ::std::vector<::std::pair<::std::string, float>> const& testArtifactData
    );

    MCAPI void $fireEventLicenseCheck(bool isLicensed, ::ExtraLicenseData& data);

    MCAPI void $fireQueryOfferResult(::std::string const& storeID, int NumberOfOffers, bool QuerySucceeded);

    MCAPI void $fireEventQueryPurchasesResult(::std::string const& storeID, int NumberOfPurchases, bool QuerySucceeded);

    MCAPI void $fireEventIAPPurchaseAttempt(
        ::std::string const& correlationId,
        ::std::string const& storeId,
        ::Offer&             offer,
        ::PurchasePath       path
    );

    MCAPI void $fireEventIAPPurchaseResolved(
        ::std::string const&                 correlationId,
        ::std::string const&                 storeId,
        ::Offer&                             offer,
        ::IMinecraftEventing::PurchaseResult purchaseRes,
        ::PurchasePath                       path
    );

    MCAPI void $fireEventIAPRedeemAttempt(
        ::std::string const& correlationId,
        ::std::string const& storeId,
        ::std::string const& productId,
        ::PurchasePath       path
    );

    MCAPI void $fireEventIAPRedeemResolved(
        ::std::string const&                 correlationId,
        ::std::string const&                 storeId,
        ::std::string const&                 productId,
        ::IMinecraftEventing::PurchaseResult purchaseRes,
        ::PurchasePath                       path
    );

    MCAPI void $fireEventPurchaseAttempt(
        ::std::string const&            correlationId,
        ::std::string const&            productId,
        ::std::string const&            price,
        ::IMinecraftEventing::StoreType storeType,
        ::PurchasePath                  path
    );

    MCAPI void $fireEventPurchaseResolved(
        ::std::string const&                 correlationId,
        ::std::string const&                 productId,
        ::std::string const&                 price,
        ::IMinecraftEventing::StoreType      storeType,
        ::IMinecraftEventing::PurchaseResult purchaseRes,
        ::PurchasePath                       path
    );

    MCAPI void $fireEventUnfulfilledPurchaseFound(::PlatformOfferPurchaseDetails& unfulfilledPurchase);

    MCAPI void $fireEventPurchaseFailureDetails(
        int                  httpCode,
        ::std::string const& errorMessage,
        ::std::string const& productId,
        ::std::string const& transactionId
    );

    MCAPI void $fireEventDeviceAccountFailure(
        ::IMinecraftEventing::SignInStage               stage,
        ::IMinecraftEventing::DeviceAccountFailurePhase phase,
        uint                                            resultStatus,
        ::std::string const&                            accountID
    );

    MCAPI void $fireEventDeviceAccountSuccess(bool isNewAccount, ::std::string const& accountID);

    MCAPI void
    $fireEventEntitlementListInfo(::std::vector<::ContentIdentity>& entitlementContentIds, bool isLegacyList);

    MCAPI void $fireEventVideoPlayed(::std::string const& productId, ::std::string const& videoUrl);

    MCAPI void $fireEventBundleSubOfferClicked(
        int                  offerIndex,
        int                  bundleSubOfferCount,
        ::std::string const& telemetryId,
        ::std::string const& productId,
        bool                 isOnSale,
        ::std::string const& timeRemainingOnSale
    );

    MCAPI void $fireEventStoreOfferClicked(::Social::eventData::StoreOfferClickedData const& eventData);

    MCAPI void $fireEventStoreOfferClicked(::std::string const telemetryId, ::std::string const& productId);

    MCAPI void $fireEventPersonaOfferClicked(::Social::eventData::PersonaOfferClickedData const& eventData);

    MCAPI void $fireEventStoreSearch(::storeSearch::TelemetryData const& telemetryData);

    MCAPI void $fireEventSearchItemSelected(
        int const            correlationId,
        int const            sessionId,
        ::std::string const& productId,
        int const            row,
        int const            column,
        int const            currentPage
    );

    MCAPI void
    $fireEventRealmsSubscriptionPurchaseStarted(::ProductSku const& productSku, ::RealmsPurchaseIntent intent);

    MCAPI void
    $fireEventRealmsSubscriptionPurchaseSucceeded(::ProductSku const& productSku, ::RealmsPurchaseIntent intent);

    MCAPI void $fireEventRealmsSubscriptionPurchaseFailed(
        ::ProductSku const&           productSku,
        ::RealmsPurchaseIntent        intent,
        ::RealmsPurchaseFailureReason reason
    );

    MCAPI void $fireEventRealmsPurchaseFulfillment(
        ::std::string const&             correlationId,
        ::std::string const&             storeId,
        ::std::string const&             productId,
        ::PurchasePath                   path,
        ::RealmsPurchaseFlow             purchaseFlow,
        ::RealmsPurchaseFulfillmentStage stage,
        ::std::string const&             failureReason
    );

    MCAPI void $fireEventUserListUpdated(
        ::std::string const& productId,
        ::std::string const& listId,
        ::std::string const& operation,
        bool                 success
    );

    MCAPI void $fireEventUgcAcquisitionStateChanged(
        ::std::string const& ugcProductId,
        uint64               downloadSize,
        double               elapsedTime,
        bool                 isUpdate,
        int                  retries,
        bool                 silent,
        int                  numContentTrackers,
        ::std::string const& result,
        ::std::string const& resultDetails,
        int                  httpStatus,
        int                  errorCode
    );

    MCAPI void $prepEventSearchCatalogRequest(::SearchRequestTelemetry const& telem);

    MCAPI void $fireEventSearchCatalogRequest(::SearchRequestTelemetry const& telem);

    MCAPI void $fireEventStoreLocalizationBinaryFetchResponse(int const status, uint const currentFetchAttempt);

    MCAPI void
    $fireEventStoreSessionResponse(::std::string const& responseType, int const status, int const retryCount);

    MCAPI void $fireEventStoreDiscoveryRequestResponse(int const status, int const retryAttempt);

    MCAPI void $fireEventStorePlayFabRequestResponse(ushort const status);

    MCAPI void $fireEventServerDrivenLayoutPageLoaded(
        ::RequestTelemetry& telem,
        ::std::string       pageID,
        int                 requestSize,
        int                 responseSize,
        int                 rowCount,
        int                 itemCount,
        int                 imageCount
    );

    MCAPI void $fireEventServerDrivenLayoutImagesLoaded(
        ::RequestTelemetry&    telem,
        ::std::string          pageID,
        int                    imageCount,
        uint64                 totalImagesSize,
        int                    successCount,
        int                    failCount,
        int                    cachedCount,
        ::std::vector<ushort>& responseCodes
    );

    MCAPI void
    $fireEventTreatmentsSet(::std::vector<::std::string> const& treatments, ::std::string const& treatmentContext);

    MCAPI void $fireEventProgressionsSet(::std::vector<::std::string> const& progressions);

    MCAPI void $fireEventTreatmentsCleared();

    MCAPI void $fireEventPackImportTimeout(::std::string const& productId);

    MCAPI void $fireEventStoreErrorPage(::std::string const& errorCode, ::std::string const& pageId);

    MCAPI void $setServerIdsforClient(
        ::std::string const& multiplayerCorrelationId,
        ::std::string const& serverVersion,
        ::std::string const& serverId,
        ::std::string const  worldId,
        ::std::string const  scenarioId
    );

    MCAPI void $fireEventOptionsUpdated(::Options& options, ::InputMode inputMode, bool onStartup);

    MCAPI void $fireEventChatSettingsUpdated(
        ::Player const*                                  player,
        ::std::vector<::Social::Events::Property> const& properties
    ) const;

    MCAPI void
    $fireEventControlRemappedByPlayer(::std::string const& actionName, ::RawInputType inputType, int keyCode) const;

    MCAPI void $fireEventDifficultySet(::Difficulty oldDifficulty, ::Difficulty newDifficulty);

    MCAPI void $fireEventGameRulesUpdated(bool oldValue, bool newValue, ::std::string const& gameRuleName);

    MCAPI void $fireEventGameRulesUpdated(int oldValue, int newValue, ::std::string const& gameRuleName);

    MCAPI void $fireEventGameRulesUpdated(float oldValue, float newValue, ::std::string const& gameRuleName);

    MCAPI void $fireCurrentInputUpdated(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);

    MCAPI void $fireEventSplitScreenUpdated(::IClientInstance const& client);

    MCAPI void $fireEventPerformanceMetrics(::ProfilerLiteTelemetry const& profileTelemetry, bool rayTracingEnabled);

    MCAPI void $fireEventPerformanceContext(::PerfContextTrackerReport const& perfContextReport);

    MCAPI void $fireEventScreenChanged(
        uint const&                                               userId,
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    );

    MCAPI void $fireEventImGuiScreenChanged(
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    );

    MCAPI void $fireEventPopupClosed(::std::string const& popupName) const;

    MCAPI void $fireEventOfferRated(
        ::std::string const& productId,
        int                  rating,
        int                  previous_rating,
        int                  count,
        double               timeElapsed
    );

    MCAPI void $fireEventNewContentCheckCompleted(::std::string const& newContentPrefix, bool hasNewStoreContent);

    MCAPI void $fireEventEncyclopediaTopicChanged(::std::string const& topicName, ::InputMode inputMode);

    MCAPI void $fireEventHowToPlayTopicChanged(::std::string const& topicName, ::InputMode inputMode);

    MCAPI void $fireEventAndroidHelpRequest();

    MCAPI void
    $fireEventWorldFilesListed(uint64 numLevels, uint64 totalSizeMB, uint64 largestLevelMB, uint64 smallestLevelMB);

    MCAPI void $fireEventStorage(int state, ::std::string const& extra);

    MCAPI void $fireEventStorageReport(::std::string const& report);

    MCAPI void $fireEventPlayerMessageSay(::std::string const& fromName, ::std::string const& message);

    MCAPI void $fireEventPlayerMessageTell(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message
    );

    MCAPI void $fireEventPlayerMessageChat(::std::string const& fromName, ::std::string const& message);

    MCAPI void $fireEventPlayerMessageMe(::std::string const& fromName, ::std::string const& message);

    MCAPI void $fireEventPlayerMessageTitle(
        ::std::string const& fromName,
        ::std::string const& toName,
        ::std::string const& message
    );

    MCAPI void $fireEventPlayerKicked(::std::string const& sessionType, ::std::string const& kickedPlayer);

    MCAPI void $fireEventPlayerBanned(::std::string const& bannedPlayer);

    MCAPI void $fireEventChunkLoaded(::LevelChunk& chunk);

    MCAPI void $fireEventChunkUnloaded(::LevelChunk& chunk);

    MCAPI void $fireEventChunkChanged(::LevelChunk& chunk);

    MCAPI void $fireEventPackPlayed(::PackInstance const& packInstance, uint priority);

    MCAPI void
    $fireEventRespondedToAcceptContent(::PacksInfoData const& data, bool accepted, bool downloadOptionalResourcePacks);

    MCAPI void $fireEventPackUpgradeAttempt(::PackManifest const& manifest, ::PackReport const& report);

    MCAPI void $fireEventStackLoaded(::StackStats const& stats);

    MCAPI void $firePackSettingsEvent(::PackSettings const& packSettings, ::PackManifest const& manifest);

    MCAPI void $fireEventTreatmentPackApplied(::PackManifest const& manifest);

    MCAPI void $fireEventTreatmentPackDownloadFailed(
        ::std::string productId,
        ::std::string packId,
        ::std::string versionNumber,
        ::std::string requiredTreatmentTag
    );

    MCAPI void $fireEventTreatmentPackDownloaded(
        ::std::string productId,
        ::std::string packId,
        ::std::string versionNumber,
        ::std::string requiredTreatmentTag
    );

    MCAPI void $fireEventTreatmentPackRemoved(::std::string packId);

    MCAPI void $fireCDNDownloadEvent(
        ::std::string const&                                packId,
        ::std::string const&                                versionNumber,
        ::std::string const&                                hostUrl,
        ::IMinecraftEventing::CDNDownloadResult const&      downloadResult,
        ::IMinecraftEventing::CDNDownloadEventOrigin const& origin,
        float const&                                        elapsedTime
    );

    MCAPI void $fireEventContentLogsInWorldSession(::std::string const& logArea, uint errorCount, uint warningCount);

    MCAPI void $fireEventEntitlementCacheLoadTimeout();

    MCAPI void $fireTextToSpeechToggled(bool uiTTS, bool chatTTS);

    MCAPI void $fireEventWorldLoadedClassroomCustomization(
        ::IMinecraftEventing::WorldClassroomCustomization                  customization,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    );

    MCAPI void $fireClassroomSettingUpdated(::ClassroomSetting classroomSetting, ::SettingsScreenMode settingMode);

    MCAPI void $fireEventNpcPropertiesUpdated(::Actor& npcOwner, bool isEditorWorldbuilder);

    MCAPI void $fireEventBoardTextUpdated(::ChalkboardBlockActor& board);

    MCAPI void $fireEventCameraUsed(bool isSelfie);

    MCAPI void $fireEventPortfolioExported(int imageCount, int captionedCount);

    MCAPI void $fireQuickPlayEvent();

    MCAPI void $firePermissionsSetEvent(
        ::PlayerPermissionLevel const  prevPlayerPermissionLevel,
        ::CommandPermissionLevel const prevCommandPermissionLevel,
        ::PlayerPermissionLevel const  playerPermissionLevel,
        ::CommandPermissionLevel const commandPermissionLevel
    );

    MCAPI void $fireExternalUriLaunched(::std::string const& uri) const;

    MCAPI void $fireUserGeneratedUriLaunched(::UserGeneratedUriSource source) const;

    MCAPI void $fireUserGeneratedUriLaunchFailed(
        ::UserGeneratedUriSource              source,
        ::Util::ResourceUri::ValidationStatus reasonCode,
        ::std::string const&                  additionalData
    ) const;

    MCAPI void $fireEventEmptyLibraryCategoryError(::std::string const& categoryTitle) const;

    MCAPI void $fireLibraryButtonPressed(
        ::std::string const& productId,
        ::std::string const& worldName,
        ::std::string const& buttonAction
    );

    MCAPI void $fireCourseButtonPressed(::std::string const& courseTitle, ::std::string const& courseId);

    MCAPI void $fireLessonActionTaken(
        ::std::string const&                        lessonTitle,
        ::std::string const&                        lessonId,
        ::std::string const&                        courseId,
        ::IMinecraftEventing::EducationLessonAction buttonAction,
        int                                         score
    );

    MCAPI void $fireLessonProgressEvent(
        ::std::string const& lessonTitle,
        ::std::string const& lessonId,
        ::std::string const& courseId,
        ::std::string const& activityId,
        ::std::string const& action,
        int                  score
    );

    MCAPI void $fireShareButtonPressed(
        ::std::string const& location,
        ::EduShareUriType    shareType,
        ::EduShareMethodType methodType,
        bool                 includesResource
    );

    MCAPI void $fireLessonCompleteDialogOpened(::IMinecraftEventing::LessonCompleteDialogEntryPoint const entryPoint
    ) const;

    MCAPI void $fireEventEduiOSPurchaseTransaction(::TransactionStatus const& status) const;

    MCAPI void $fireInAppCodeBuilderActivated(::OpenCodeMethod method, ::std::string const& ideName) const;

    MCAPI void $fireInAppCodeBuilderDismissed(::std::string const& ideName) const;

    MCAPI void $fireCodeCommandButtonPressed();

    MCAPI void $fireIDESelected(::std::string const& name) const;

    MCAPI void $fireEventEduResources() const;

    MCAPI void $fireEventCodeBuilderClosed() const;

    MCAPI void $fireEventCodeBuilderLog(
        ::Webview::TelemetryCommonProperties const& properties,
        ::std::string const&                        message,
        ::std::string&                              level
    ) const;

    MCAPI void $fireEventCodeBuilderScoreChanged(::std::string const& objective, int const score) const;

    MCAPI void $fireEventEduServiceStatus(
        ::std::string const&                                               serviceName,
        ::std::string const&                                               requestName,
        int                                                                durationMS,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) const;

    MCAPI void $fireEventCodeBuilderRuntimeAction(::std::string const& action) const;

    MCAPI void
    $fireEventWebviewDownload(::std::string const& downloadState, ::WebviewDownloadInfo const& downloadInfo) const;

    MCAPI void $fireEduServiceRequestFailed(
        ::std::string const&                                               serviceName,
        ::std::string const&                                               requestName,
        ::std::string const&                                               error,
        ::buffer_span<::std::pair<::std::string_view, ::std::string_view>> details
    ) const;

    MCAPI void $fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) const;

    MCAPI void $fireEventOptionsChanged(
        ::std::string const&                            optionGroup,
        ::std::unordered_map<::std::string, int> const& events
    ) const;

    MCAPI void $fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) const;

    MCAPI void $fireEventTagButtonPressed(::std::string const& tag, bool showMore) const;

    MCAPI void $fireEventLevelDataOverride(::std::string_view valueName) const;

    MCAPI void $fireEventEduContentVerificationFailed() const;

    MCAPI void $fireEventLibrarySearch(::librarySearch::TelemetryData const& telemetryData) const;

    MCAPI void $fireEventLibrarySearchItemSelected(
        int const            sessionId,
        int const            correlationId,
        ::std::string const& productId,
        int const            row,
        int const            column
    ) const;

    MCAPI void $fireEventControlTipsPanelUpdated(::EduControlPanelUpdateType updateType, double elapsedTimeSec) const;

    MCAPI void $fireEventWorldExported(int64 worldSeed, uint64 worldSize);

    MCAPI void $fireEventWorldImported(int64 worldSeed, uint64 worldSize);

    MCAPI void $fireEventWorldImportedResult(::FileArchiverOutcome importResult);

    MCAPI void $fireGlobalResourcePackCrashRecovery(::PackInstance& packInstance, ::mce::UUID recoveryID, int order);

    MCAPI void $fireEventRealmShared(
        ::std::string const&                   url,
        ::IMinecraftEventing::ShareMode const& mode,
        ::Realms::RealmId const&               worldId
    );

    MCAPI void $fireEventRealmMemberlistCleared(::Realms::RealmId const& worldId, int const& numberOfUsersRemoved);

    MCAPI void $fireEventRealmUrlGenerated(::std::string const& url, ::Realms::RealmId const& worldId);

    MCAPI void $fireEventStructureExport(
        ::glTFExportData const&             exportData,
        ::IMinecraftEventing::ExportOutcome outcome,
        ::IMinecraftEventing::ExportStage   stage
    ) const;

    MCAPI void $fireEventContentShared(
        ::std::string const&                   productId,
        ::std::string const&                   url,
        ::IMinecraftEventing::ShareMode const& mode
    );

    MCAPI void $fireMinecraftVersionLaunched(bool launchedLegacy);

    MCAPI void $fireMinecraftVersionInviteAccepted(bool launchedLegacy, uint64 inviteGameOwner);

    MCAPI void $fireInviteStatusReceived(::std::string id);

    MCAPI void $fireInviteStatusSentImpl(uint userId, ::std::vector<::std::string> invitationIds);

    MCAPI void $fireDayOneExperienceStateChanged(
        ::IMinecraftEventing::DayOneExperienceState newState,
        ::std::optional<uint>                       importedWorldIndex,
        ::std::optional<uint64>                     importedWorldTimestamp
    );

    MCAPI void $fireWorldConversionAttemptEvent(::Legacy::WorldConversionReport const& report);

    MCAPI void $fireWorldConversionInitiatedEvent(::std::string const& converterVersion);

    MCAPI void $fireWorldUpgradedToCnCPart2(
        bool                 willUpgrade,
        ::std::string const& baseGameVersion,
        ::Experiments const& experiments,
        ::std::string const& lastOpenedVersion,
        ::LevelSeed64        worldSeed,
        float                worldSizeMB
    );

    MCAPI void $fireEventAssertFailed(::std::string const& assertBucket, ::std::string const& message);

    MCAPI void $fireEventCrashSystemFailedToInit();

    MCAPI void $fireChatUsedEvent(uint chatLength, bool isSlashCommand);

    MCAPI void $fireEventJoinByCode(::std::string const&);

    MCAPI void $fireEventAppInitFileOpenStats(
        ::Core::Profile::FileCounters const& openForRead,
        ::Core::Profile::FileCounters const& openForWrite
    );

    MCAPI void $fireEventStartupPerformance(
        ::std::vector<::SerialWorkListLogEntry> const& preLoadingBar,
        ::std::vector<::SerialWorkListLogEntry> const& loadingBar,
        ::std::vector<::SerialWorkListLogEntry> const& postLoadingBar
    );

    MCAPI void $fireEventOnAppStart(::std::vector<::SerialWorkListLogEntry> const& performanceCountsAndTimings);

    MCAPI void $fireEventOnAppSuspend(
        ::std::vector<::SerialWorkListLogEntry> const& performanceCountsAndTimings,
        bool                                           forceDisableEvents
    );

    MCAPI void $fireEventOnAppResume(::std::vector<::SerialWorkListLogEntry> const& performanceCountsAndTimings);

    MCAPI void $fireEventOnDeviceLost(::std::vector<::SerialWorkListLogEntry> const& performanceCountsAndTimings);

    MCAPI void $fireEventRealmDownload(
        ::std::string const& correlationId,
        ::std::string const& downloadStage,
        int const            errorCode,
        int const            realmId,
        int const            fileSizeKB
    );

    MCAPI void $fireEventRealmUpload(
        ::std::string const& correlationId,
        ::std::string const& uploadStage,
        int const            errorCode,
        int const            realmId,
        int const            fileSizeKB,
        bool const           isPack
    );

    MCAPI void $fireRealmConnectionEventStart(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow);

    MCAPI void $fireRealmConnectionEventRealmAPIRequest(::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow);

    MCAPI void $fireRealmConnectionEventRealmAPIResponse(
        ::IMinecraftEventing::RealmConnectionFlow realmConnectionFlow,
        int                                       responseCode
    );

    MCAPI void $fireRealmConnectionEventGenericLambdaCalled(
        ::IMinecraftEventing::RealmConnectionFlow   realmConnectionFlow,
        ::IMinecraftEventing::RealmConnectionLambda realmConnectionLambda,
        ::IMinecraftEventing::RealmConnectionResult realmConnectionResult
    );

    MCAPI void $fireIgnoredNotificationsEvent(
        ::IMinecraftEventing::IgnoredNotificationsType              notificationType,
        int                                                         notificationCount,
        ::std::set<::IMinecraftEventing::IgnoredNotificationSource> notificationSources
    );

    MCAPI void $fireClubsOpenFeedScreenEvent(
        ::IMinecraftEventing::ClubsFeedScreenSource const source,
        ::Realms::RealmId const                           realmId,
        ::std::string const&                              clubId,
        int                                               unreadPosts
    );

    MCAPI void $fireClubsEngagementEvent(
        ::IMinecraftEventing::ClubsEngagementAction     action,
        ::IMinecraftEventing::ClubsEngagementTargetType engagementTargetType,
        char const*                                     target,
        ::Realms::RealmId const                         realmId,
        ::std::string const&                            clubId
    );

    MCAPI void $fireEventCopyWorldEducationEnabled();

    MCAPI void $fireEventRespawn(::Player& player, int dimID);

    MCAPI void $fireEventServerRespawnSearchTime(::Player& player, ::PlayerRespawnTelemetryData const& data);

    MCAPI void $fireEventUnknownBlockReceived(::NewBlockID const& blockId, ushort data);

    MCAPI void $fireEventCompoundCreatorCreated(int compoundId, int count);

    MCAPI void $fireEventLabTableCreated(int reactionId, int productId, int productAux);

    MCAPI void $fireEventElementConstructorUsed(
        int                                             atomicNumber,
        int                                             count,
        ::IMinecraftEventing::ElementConstructorUseType useType
    );

    MCAPI void $fireEventReducerBlockEntered(::ItemDescriptor const& item);

    MCAPI void $fireEventMultiplayerSessionUpdate(::Bedrock::NonOwnerPointer<::MultiPlayerLevel> level);

    MCAPI void $fireEventLevelDestruct();

    MCAPI void $flagEventDeepLink();

    MCAPI void $flagEventPlayerGameTypeDefault(bool isDefault);

    MCAPI void
    $fileEventCloudWorldPullFailed(::std::string const& reason, ::std::string const& worldID, bool localLevelDatUsed);

    MCAPI void $fireEventLevelDatLoadFailed(::std::string const& reason, ::std::string const& worldID, bool isFatal);

    MCAPI void $fireEventWorldCorruptionCausedWorldShutdown(
        ::LevelStorageEventingContext const& context,
        ::std::string const&                 reason,
        ::std::optional<bool>                isOutOfDiskSpace
    );

    MCAPI void $fireEventClientLeftGameDueToUnrecoverableError(::std::string const& reason, bool isServer);

    MCAPI void $fireEventServerShutdownDueToError(::std::string const& reason);

    MCAPI void $fireEventDBStorageSizeSnapshot(
        ::LevelStorageEventingContext const& context,
        ::DBStorageFolderWatcher const&      folderWatcher,
        ::DBStorageFolderWatcherSnapshotKind kind
    );

    MCAPI void $fireEventWorldHistoryPackSourceMissingDuringUpgrade(
        ::std::string const& worldPath,
        ::std::string const& levelId,
        ::std::string const& deletionCandidate
    );

    MCAPI void $fireStructureBlockAction(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        ::StructureTelemetryClientData const*          telemetryClientData
    );

    MCAPI void $fireStructureBlockRedstoneActivated(
        ::IMinecraftEventing::StructureBlockActionType structureBlockActionType,
        ::StructureEditorData const&                   structureEditorData,
        ::StructureTelemetryClientData const*          telemetryClientData
    );

    MCAPI void $fireEventSidebarNavigation(
        uint const&          userId,
        ::std::string const& layoutType,
        ::std::string const& telemetryId,
        int const            depthLevel,
        bool const           isSelected,
        bool const           areChildrenVisible,
        bool const           hasChildren
    );

    MCAPI void $fireEventSidebarVerboseToggled(
        uint const&          userId,
        ::std::string const& layoutType,
        ::std::string const& verboseNavigationType,
        bool const           verboseState
    );

    MCAPI void $fireEventPersonaUserLoadedActive(
        ::std::string const& personaProfileName,
        ::std::string const& classicSkinId,
        bool                 personaUsesClassicSkin
    );

    MCAPI void $fireEventPersonaItemPreviewed(
        ::std::string const&                personaProfile,
        ::std::string const&                itemOfferId,
        ::std::string const&                productId,
        uint                                row,
        uint                                column,
        ::IMinecraftEventing::PromotionType promotionType,
        bool                                isOwned,
        ::std::string const&                creatorId,
        ::std::string const&                creatorName,
        double                              secondsToLoadContent,
        ::IMinecraftEventing::StoreType     storeType
    );

    MCAPI void $fireEventPersonaSkinChanged(
        ::std::string const& personaProfile,
        ::std::string const& classicSkinId,
        bool                 isClassicSkinUsed
    );

    MCAPI void $fireEventPersonaAvatarUpdated(
        ::std::string const&                personaProfile,
        ::std::vector<::std::string> const& newAppearancePieceIds,
        ::std::vector<bool> const&          newPieces,
        ::std::vector<bool> const&          tintedPieces,
        bool                                isNewPersona,
        bool                                isBeingDeleted,
        ::std::string const&                bodySize,
        ::std::string const&                armSize,
        ::std::string const&                classicSkinId,
        bool                                usesClassicSkin,
        ::std::vector<::std::string> const& emotesPieceIds,
        ::std::vector<::std::string> const& emoteSlotNumbers
    );

    MCAPI void $fireEventPersonaAvatarsListed(::std::vector<::std::string> const& profileTypesUsed);

    MCAPI void
    $fireEventPersonaEmotePlayed(::std::string const& emoteProductId, bool isEmoteEndedEarly, int emoteSlotId);

    MCAPI void
    $fireEventDefaultCastSelected(int previewIndex, ::mce::UUID appearanceId, ::std::string const& appearanceName);

    MCAPI void $fireEventPersonaInitalizationEvent(
        uint                 secondsToCompletion,
        ::std::string const& status,
        ::std::string const& user
    );

    MCAPI void $fireEventPersonaGeneralError(::std::string const& personaErrorName, uint duplicateErrorsFired);

    MCAPI void $fireEventPersonaLoadingPieces(uint piecesLoaded, double timeToLoadInSeconds);

    MCAPI void $fireEventPersonaStillLoading(
        bool                                isSignedIn,
        bool                                selectedSkinInitialized,
        bool                                isStillSyncingWithService,
        bool                                isRepoStillBuildingAppearances,
        bool                                isPendingSkinStillLoading,
        bool                                isRefreshingEntitlements,
        bool                                isUserUpdateInProgress,
        bool                                isSelectedSkinLoaded,
        ::std::vector<::std::string> const& failingPersonaProfiles,
        int                                 unknownPersonasCount,
        double                              timeElapsed
    );

    MCAPI void $fireEventPersonaCreationFailed(
        ::std::string const& errorName,
        ::std::string const& pieceId,
        bool                 missingTop,
        bool                 missingBottom,
        ::std::string const& repositoryPieceType,
        ::std::string const& appearancePieceType
    );

    MCAPI void $fireEventPersonaCategoryInformation(::std::string const& categoryInformation);

    MCAPI void $fireEventOreUIError(uint const& userId, ::std::string const& errorType);

    MCAPI void $fireEventOreUIScreenPerformance(uint const& userId, ::OreUI::DataTracker const& dataTracker);

    MCAPI void $fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool const           isOwner
    );

    MCAPI void
    $fireEventOnboardingWorldCreationUsage(bool onboardingWorldCreationUsed, bool hasWorlds, bool hasOnlyBaseGamePacks);

    MCAPI void $fireEventVRModeChanged(bool const isVRModeEnabled);

    MCAPI ::std::shared_ptr<void*> $requestEventDeferment();

    MCAPI ::gsl::not_null<::Bedrock::CrashTelemetryProcessor*> $getCrashTelemetryProcessor();

    MCAPI void $sendCrashTelemetryNow(::std::shared_ptr<::Bedrock::SessionInfo> session);

    MCAPI void $addCrashTelemetryToBatch(::std::shared_ptr<::Bedrock::SessionInfo> session);

    MCAPI void $sendBatchedCrashTelemetry();

    MCAPI void $sendCrashStatusTelemetry(::Bedrock::CrashUploadStatus const& status);

    MCAPI void $fireEventLevelChunkPerformanceData(bool isClientSide);

    MCAPI void $fireChunkRecyclerTelemetryData(::ChunkRecyclerTelemetryOutput const& output);

    MCAPI void $fireEventActorValueValidationFailed(::std::string const& invalidValue, char const* caller);

    MCAPI void $fireScreenLoadTimeUpdateEvent(
        uint const&                userId,
        ::std::string const&       screenName,
        ::std::chrono::nanoseconds duration,
        ::std::string const&       loadInstanceId
    );

    MCAPI void $fireDBStorageError(::LevelStorageEventingContext const& context, ::std::string const& errorType);

    MCAPI void $fireStorageMigrationEvent(
        bool                                              isSuccessful,
        ::Bedrock::StorageMigration::StorageMigrationType migrationType,
        int                                               numFilesMigrated,
        int                                               numFilesTotal,
        ::std::chrono::nanoseconds                        duration,
        ::std::string const&                              failureReason
    );

    MCAPI void $fireEventConnectedStorageResult(
        ::ConnectedStorageEventType eventType,
        bool                        succeeded,
        uint                        durationMs,
        ::std::optional<uint>       chunksSent,
        ::std::string const&        errorMessage,
        ::std::string const&        levelId,
        int64                       quotaRemaining,
        ::std::optional<uint>       filesToAddCount,
        ::std::optional<uint>       filesToDeleteCount,
        ::std::optional<uint>       HACK_oldFilesToDeleteCount
    );

    MCAPI void $fireEventConnectedStorageError(char const* message, ::std::string const& levelId, int64 quotaRemaining);

    MCAPI void $fireServerStarted(
        ::IMinecraftEventing::ServerType                          serverType,
        ::std::string const&                                      serverId,
        ::std::unordered_map<::std::string, ::std::string> const& propertiesChanged
    );

    MCAPI void $fireServerShutdown(::std::string const& serverId);

    MCAPI void $fireSafetyServiceTextProcessEvent(
        ::std::string const&        authorId,
        ::TextProcessingEventOrigin eventOrigin,
        ushort                      responseCode,
        ::std::string const&        message,
        bool                        wasFlagged,
        double                      responseTime,
        char                        risk,
        char                        trustLevel,
        ::Json::Value const&        events,
        bool                        isProcessorOffline,
        bool                        isCachedResponse
    );

    MCAPI void $firePassthroughTextProcessEvent(
        ::std::string const&        authorId,
        ::TextProcessingEventOrigin eventOrigin,
        ::std::string const&        message
    );

    MCAPI void $fireBannedSkinVerificationEvent(
        uint const&          userId,
        ::std::string const& serverType,
        ::std::string const& skinData,
        bool                 wasApproved,
        int const            eventCode,
        ::std::string const& message
    );

    MCAPI void $fireEventPlayerReportSent(
        bool                 successfulReportSent,
        ::std::string const& failureSource,
        ::std::string const& failureReason,
        ::std::string const& reportID
    );

    MCAPI void
    $fireEventOneDSPlayerReportPayload(::std::string const& reportPayloadJson, ::std::string const& reportID);

    MCAPI void $firePlayerAccountMetadata(
        ::Social::PermissionCheckResult multiPlayerAllowed,
        ::Social::PermissionCheckResult chatAllowed,
        ::Social::PermissionCheckResult addFriendAllowed,
        ::Social::PermissionCheckResult ugcAllowed,
        ::Social::PermissionCheckResult clubsAllowed,
        ::Social::PermissionCheckResult viewProfilesAllowed,
        bool                            isChildAccount,
        bool                            isGuest
    );

    MCAPI void
    $fireEventSafetyHTTPRequest(::std::string const& method, ::std::string const& url, int const responseCode);

    MCAPI void $fireEventProfanityFilter(bool localFilter, bool remoteFilter, bool playerFilter);

    MCAPI void $fireEventChatFloodingActionTaken(
        ::std::string const&         authorXuid,
        ::Safety::ChatFloodingAction action,
        ::std::string const&         message
    );

    MCAPI void $fireEventTextProcessorStartupFailed(::std::string const& stage, int retryCount, int maxRetryCount);

    MCAPI void $fireEventBlockUser(::std::string const& xuid, bool isSuccess, bool isBlocked);

    MCAPI void $fireEventMuteUser(::std::string const& xuid, bool isSuccess, bool isMuted);

    MCAPI void $fireWorldRecoveryTelemetryEvent(::Bedrock::WorldRecoveryTelemetryEvent const& data);

    MCAPI ::Json::Value $propertiesAsJsonValue() const;

    MCAPI void $fireEventUwpToGdkMigrationComplete(
        ::Bedrock::DeviceIdContext const& deviceIdContext,
        ::std::string const&              gdkDeviceId
    );

    MCAPI void $fireNetworkChangedEvent(::std::string const& networkConnectionType);

    MCAPI void $fireEventMessageServiceImpression(
        ::std::string const& messageId,
        ::std::string const& messageSessionId,
        ::std::string const& Surface,
        ::std::string const& Template,
        bool const           isControl
    );

    MCAPI void $fireEventMessageReceived(
        ::std::string const& messageId,
        ::std::string const& messageSessionId,
        ::std::string const& Surface,
        ::std::string const& Template,
        bool const           isControl
    );

    MCAPI void $fireEventGoogleAccountHoldWarning(bool navigatedToSubscription);

    MCAPI void $fireDelayedEventReportOfflineAction(::std::string const& offlineAction);

    MCAPI void
    $fireEventFeedbackSubmitted(::std::string const& productId, bool safetyCheckSuccessful, bool isValidText);

    MCAPI void $fireEventPlayerActionComparisonFailed(::std::string const& message);

    MCAPI void $fireEventTrackDeeplinks(::std::string const& deeplinkDestination, ::std::string const& deeplinkSource);

    MCAPI void $fireEventVehiclePositionComparisonFailed(::Vec3 const& clientPos, ::Vec3 const& serverPos);

    MCAPI void $firePlayerUnexpectedFallDamage(float const fallDistance, bool isVehicle, float const divergenceAmount);

    MCAPI void
    $fireEventActorMovementCorrectionDivergence(::ActorType actorType, ::std::vector<float> const& divergences);

    MCAPI void $fireEventDedicatedServerDiscoveryResponse(int const status, int const retryAttempt);

    MCAPI void $fireEventGameTip(int gameTipId, int gameTipEventType, int gameTipTestGroup, ::InputMode inputMode);

    MCAPI void $fireEventAddedFriend(
        ::std::string const&                      addedXuid,
        ::IMinecraftEventing::AddedFriendLocation location,
        bool                                      success
    );

    MCAPI void $fireEventInboxSummary(::Social::Events::InboxSummaryData const& data);

    MCAPI void $fireEventTrialStatusFailed(int errorCode);

    MCAPI void $fireEventSaveDataExpansion(uint64 preExpansionSize, uint64 postExpansionSize, uint64 levelUsedSize);

    MCAPI void $fireEventProfileButtonPressed(::std::string const& entryPoint) const;

    MCAPI void $fireEventWorldCopy(uint64 worldSize, uint64 filesSum, ::LevelSeed64 worldSeed);

    MCAPI void $fireEventWriteBudgetLow(
        uint64                     remainingWriteBudget,
        float                      writeRateMBPerMin,
        ::std::chrono::nanoseconds timeSinceLastLargeFileTransactionCompleted,
        bool                       anyLargeFileTransactionInProgress,
        ::std::string const&       correlationId
    );

    MCAPI void $fireEventWriteBudgetReplenished(
        ::std::chrono::nanoseconds throttledTime,
        uint64                     lowestWriteBudget,
        ::std::optional<uint64>    lowestSystemThrottlingPerSec,
        ::std::chrono::nanoseconds timeSinceLastLargeFileTransactionCompleted,
        bool                       anyLargeFileTransactionInProgress,
        ::std::string const&       correlationId
    );

    MCAPI void $fireEventLargeFileWriteStall(
        uint64                              totalWriteSizeBytes,
        ::std::vector<::std::string> const& largestFileNames,
        ::std::chrono::nanoseconds          estimatedTotalWriteTime,
        ::std::chrono::nanoseconds          estimatedTotalWaitTime,
        ::std::string const&                originatingSystem,
        uint64                              budgetBytesAtStartOfOperation,
        bool                                operationWasCancelled,
        ::std::chrono::nanoseconds          totalWriteTime,
        ::std::chrono::nanoseconds          totalWaitTime,
        int                                 numberOfFilesWritten,
        uint64                              budgetBytesAtEndOfOperation,
        ::std::vector<::std::string> const& associatedContentIDs
    );

    MCAPI void $fireEventLowMemoryDetected(::LowMemoryReport const& report);

    MCAPI ::Social::Events::EventManager& $getEventManager() const;

    MCAPI uint $getPrimaryLocalUserId() const;

    MCAPI bool $getShouldHaveAchievementsEnabled();

    MCAPI void $setShouldHaveAchievementsEnabled(bool value);

    MCAPI bool $getAchievementsAlwaysEnabled();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForWorldRecoveryTelemetryHandler();

    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForIScreenChangedEventing();

    MCAPI static void** $vftableForIUIEventTelemetry();

    MCAPI static void** $vftableForIWebviewTelemetry();

    MCAPI static void** $vftableForIConnectionEventing();

    MCAPI static void** $vftableForCrashTelemetryProcessor();

    MCAPI static void** $vftableForIPackTelemetry();
    // NOLINTEND
};
