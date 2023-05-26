// Copyright Rob Meade. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

#include "InventoryCategory.h"

#include "InventoryItem.generated.h"


// Forward Declarations
class UTexture2D;


UCLASS(Blueprintable)
class SHOPSYSTEM_API UInventoryItem : public UObject
{
	GENERATED_BODY()


public:


protected:

	UPROPERTY(EditAnywhere, Category = "Item")
	FGameplayTag ID;

	UPROPERTY(EditAnywhere, Category = "Item")
	FString Name;

	UPROPERTY(EditAnywhere, Category = "Item")
	FString Description;

	UPROPERTY(EditAnywhere, Category = "Item")
	EInventoryCategory Category = EInventoryCategory::None;

	UPROPERTY(EditAnywhere, Category = "Item")
	int32 Cost = 0;

	UPROPERTY(EditAnywhere, Category = "Item")
	UTexture2D* Texture = nullptr;

private:


};
