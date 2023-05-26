// Copyright Rob Meade. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"

#include "SuccessModalWidget.generated.h"


// Forward Declarations
class UButton;
class UTextBlock;


UCLASS()
class SHOPSYSTEM_API USuccessModalWidget : public UUserWidget
{
	GENERATED_BODY()


public:

	void SetSuccessMessage(const FString& Message) const;


protected:


private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* SuccessText = nullptr;

	UPROPERTY(meta = (BindWidget))
	UButton* CloseButton = nullptr;
};
