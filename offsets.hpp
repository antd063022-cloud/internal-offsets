#pragma once
#include <cstdint>

namespace offsets {
    constexpr std::uintptr_t StaticFindObject = 0x39983A;
    constexpr std::uintptr_t ProcessEvent = 0x723B6;
    constexpr std::uintptr_t GameViewPort = 0xAE0;
    constexpr std::uintptr_t BlendMode = 0x169;
    constexpr std::uintptr_t bDisableDepthTest = 0x1f0;
    constexpr std::uintptr_t bUseEmissiveForDynamicAreaLighting = 0x1f0;
    constexpr std::uintptr_t Mesh = 0x330;
    constexpr std::uintptr_t PawnMaterials_ALL = 0x6260;
    constexpr std::uintptr_t SkeletalMeshes = 0x6250;
    constexpr std::uintptr_t PrimaryPickupItemEntry = 0x3A8;
    constexpr std::uintptr_t RootComponent = 0x1b0;
    constexpr std::uintptr_t Relative_Location = 0x140;
    constexpr std::uintptr_t ViewPitchMin = 0x28ec;
    constexpr std::uintptr_t ViewPitchMax = 0x28f0;
    constexpr std::uintptr_t ViewYawMin = 0x28f4;
    constexpr std::uintptr_t ViewYawMax = 0x28f8;
    constexpr std::uintptr_t CurrentVehicle = 0x2d20;
    constexpr std::uintptr_t TargetSourceOffset = 0x1130;
    constexpr std::uintptr_t TargetSourceOffsetWhileCrouched = 0x1148;
    constexpr std::uintptr_t playerstate = 0x2D0;
    constexpr std::uintptr_t Prediction_Speed = 0x222C;
    constexpr std::uintptr_t Prediction_Gravity = 0x2230;
    constexpr std::uintptr_t TargetSourceOffsetWhileTargeting = 0x1160;
    constexpr std::uintptr_t GlobalAnimRateScale = 0xaa8;
    constexpr std::uintptr_t bIsReloadingWeapon = 0x3a1;
    constexpr std::uintptr_t bForceRefpose = 0xac1;
    constexpr std::uintptr_t bADSWhileNotOnGround = 0x5ad1;
    constexpr std::uintptr_t StartFloating_RVA = 0xe682542;
    constexpr std::uintptr_t StopFloating_RVA = 0xe67e83e; 
    constexpr std::uintptr_t BeginHovering_RVA = 0xe67d266;
    constexpr std::uintptr_t EndHovering_RVA = 0xe67e8ea;
    constexpr std::uintptr_t TargetedFortPawn = 0x1840;
    constexpr std::uintptr_t ClipX = 0x30;
    constexpr std::uintptr_t ClipY = 0x34;
    constexpr std::uintptr_t LocalPlayers = 0x38;
    constexpr std::uintptr_t timedialation = 0x68; 
    constexpr std::uintptr_t bIgnoreTryToFireSlotCooldownRestriction = 0x18f1;
    constexpr std::uintptr_t ViewportClient_LocalPlayer = 0x78;
    constexpr std::uintptr_t World_ViewportClient = 0x78;
    constexpr std::uintptr_t ItemDisplayName = 0x38;
    constexpr std::uintptr_t bAlreadySearched = 0xd22;
    constexpr std::uintptr_t InteractionComponent = 0x2b20;
    constexpr std::uintptr_t StartInteractTime = 0x300;
}
