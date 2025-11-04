// Fill out your copyright notice in the Description page of Project Settings.


#include "HUB/GameHUD.h"

void AGameHUD::BeginPlay()
{
	Super::BeginPlay();
}

void AGameHUD::DrawHUD()
{
	Super::DrawHUD();

	if (!CrosshairTexture) return;

	// Canvas Dimensions
	float CanvasWidth = Canvas->ClipX;
	float CanvasHeight = Canvas->ClipY;
	//float HalfCanvasWidth = CanvasWidth * 0.5f;
	//float HalfCanvasHeight = CanvasHeight * 0.5f;
	FVector2D CanvasCenter(CanvasWidth * 0.5f, CanvasHeight * 0.5f);

	// Crosshair Dimensions
	float CrosshairWidth = CrosshairTexture->GetSurfaceWidth();
	float CrosshairHeight = CrosshairTexture->GetSurfaceHeight();
	FVector2D CrosshairHalfSize(CrosshairWidth * 0.5f, CrosshairHeight * 0.5f);

	FVector2D CrosshairDrawPosition(CanvasCenter.X - CrosshairHalfSize.X, CanvasCenter.Y - CrosshairHalfSize.Y);

	// Draw the crosshair
	FCanvasTileItem CrosshairItm(CrosshairDrawPosition, CrosshairTexture->GetResource(), FLinearColor::White);
	Canvas->DrawItem(CrosshairItm);
}
