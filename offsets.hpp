namespace offsets {
        std::uintptr_t team_component = 0x610; // Class ShooterGame.AresPlayerStateBase -> struct UBaseTeamComponent* TeamComponent;
        std::uintptr_t relative_location = 0x164; // Class Engine.SceneComponent -> struct FVector RelativeLocation;
        std::uintptr_t relative_rotation = 0x170; // Class Engine.SceneComponent -> struct FRotator RelativeRotation;
        std::uintptr_t root_component = 0x238; //Class Engine.Actor -> struct USceneComponent* RootComponent;
        std::uintptr_t PlayerState = 0x3d8; // Class Engine.Pawn - > struct APlayerState* PlayerState;
        std::uintptr_t Mesh = 0x418; // Class Engine.Character -> struct USkeletalMeshComponent* Mesh;
        std::uintptr_t dormant = 0x100; // Class ShooterGame.SkeletalPoseRewinderComponent -> struct USkeletalMeshComponent* SkeletalMeshComponent; //rr
        std::uintptr_t CameraCachePrivate = 0x1f80; // Class Engine.PlayerCameraManager -> struct FCameraCacheEntry CameraCachePrivate;
        std::uintptr_t AcknowledgedPawn = 0x448; // Class Engine.PlayerController - > struct APawn* AcknowledgedPawn;
        std::uintptr_t CameraManager = 0x460; // Class Engine.PlayerController -> struct APlayerCameraManager* PlayerCameraManager;
        std::uintptr_t LocalPlayers = 0x40; // Class Engine.GameInstance -> struct TArray<struct ULocalPlayer*> LocalPlayers;
        std::uintptr_t Player_Controller = 0x38; // Class Engine.Player - > struct APlayerController* PlayerController;
        std::uintptr_t last_submit_time = 0x380;
        std::uintptr_t last_render_time = 0x384;
        std::uintptr_t component_to_world = 0x250;
        std::uintptr_t bone_array = 0x5D8; // Class Engine.SkinnedMeshComponent -> Under struct TArray<struct FVertexOffsetUsage> VertexOffsetUsage;
        std::uintptr_t AActor = 0xA0;
        std::uintptr_t ActorCount = 0xA8;
        std::uintptr_t BoneArrayCache = bone_array + 0x10;
        std::uintptr_t Bone_Count = bone_array + 0x8;
        std::uintptr_t team_id = 0xf8; //
        std::uintptr_t VGK_Pool = 0x8ACB0; //
        std::uintptr_t unique_id = 0x38;
        std::uintptr_t FNNamePool = 0xAA964C0;
        std::uintptr_t health = 0x1B0;
        std::uintptr_t bActorIsBeingDestroyed = 0x120;
        std::uintptr_t TimeRemainingToExplode: 0x4c4;
        std::uintptr_t DefuseProgress: 0x4e0;
        std::uintptr_t GuardedRegionOffset = 0x60;
        std::uintptr_t Levels = 0x158; // Class Engine.World -> struct TArray<struct ULevel*> Levels;
        std::uintptr_t Inventory = 0x988; // Class ShooterGame.ShooterCharacter -> struct UAresInventory* Inventory;
        std::uintptr_t CurrentEquippable = 0x248; // Class Class ShooterGame.AresInventory -> struct AAresEquippable* CurrentEquippable;
        std::uintptr_t GameInstance = 0x1a0; // Class Engine.World -> struct UGameInstance* OwningGameInstance;
        std::uintptr_t damage_handler= 0x9e8; // Class ShooterGame.ShooterCharacter -> struct UDamageableComponent* DamageHandler;
        std::uintptr_t Persistent_Level = 0x38; // Class Engine.World -> struct ULevel* PersistentLevel;
        std::uintptr_t Inventory = 0x988;  // // Class ShooterGame.ShooterCharacter -> struct UAresInventory* Inventory;
        std::uintptr_t CurrentEquippable = 0x248; //// Class Class ShooterGame.AresInventory -> struct AAresEquippable* CurrentEquippable;
        std::uintptr_t uworld_state = 0xADB4A80;
        std::uintptr_t fname_pool = 0xAB60E00;
        std::uintptr_t decrypt_wide = 0x4306E00;
        std::uintptr_t decrypt_non_wide = 0x4306D90;
        std::uintptr_t set_ares_outline_mode = 0x5FDA5C5;
        std::uintptr_t get_actor_bounds = 0x277E67D;
         
        std::uintptr_t get_spread_values = 0x3136EB0;
        std::uintptr_t get_spread_angles = 0x3A718A0;
        std::uintptr_t to_vector_and_normalize = 0x4287DE0;
        std::uintptr_t to_angle_and_normalize = 0x4284390;
        std::uintptr_t get_firing_location = 0x37881D0;
         
        std::uintptr_t trigger_veh = 0x21D1D60;
        std::uintptr_t bone_matrix =  0x602B610;
        std::uintptr_t input_key = 0x66CEF70;
        std::uintptr_t line_of_sight = 0x5D1FD42;
        std::uintptr_t skin_changer_decrypt = 0x316A650;
        std::uintptr_t process_event = 0x4579A90;
        std::uintptr_t find_object = 0x458E0D0;
        std::uintptr_t load_object = 0x458EB80;
        std::uintptr_t project_world_to_screen = 0x39543A4;
        std::uintptr_t get_view_point = 0x628CAB0;
         
        std::uintptr_t set_ares_outline_mode = 0x5FDA540;
        std::uintptr_t set_outline_colors_render = 0x32D4A47;
        std::uintptr_t enemy_color = 0x4D56009;
        std::uintptr_t ally_color = 0x4D56002;
        std::uintptr_t make_render_dirty = 0x5FDA567;
        std::uintptr_t free_memory = 0x1BF15FC;
         
        std::uintptr_t k2_draw_text = 0x67AA2B0;
        std::uintptr_t k2_draw_text_alt = 0x66D2690;
        std::uintptr_t k2_draw_line = 0x67A99D9;
        std::uintptr_t k2_draw_box = 0x66D1E40;
}
