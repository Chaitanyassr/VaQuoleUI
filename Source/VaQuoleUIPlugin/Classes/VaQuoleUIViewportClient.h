// Copyright 2014 Vladimir Alyamkin. All Rights Reserved.

#pragma once

#include "VaQuoleUIPluginPrivatePCH.h"
#include "VaQuoleUIViewportClient.generated.h"

UCLASS()
class UVaQuoleUIViewportClient : public UGameViewportClient
{
	GENERATED_UCLASS_BODY()

	/** Register UI component as a HUD UI */
	void RegisterWebUI(UVaQuoleUIComponent* WebView);

	/** Unregister UI component */
	void UnregisterWebUI(UVaQuoleUIComponent* WebView);

	// FViewportClient interface.
	virtual bool InputKey(FViewport* Viewport, int32 ControllerId, FKey Key, EInputEvent EventType, float AmountDepressed = 1.f, bool bGamepad = false) OVERRIDE;
	// End of FViewportClient interface.

private:
	/** List of all HUD web views (UI of this kind can be operated in 2D mode) */
	TArray<UVaQuoleUIComponent*> HudViews;

};
