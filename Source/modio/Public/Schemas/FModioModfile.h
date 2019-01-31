#pragma once

#include "modio.h"
#include "FModioFilehash.h"
#include "FModioDownload.h"
#include "FModioModfile.generated.h"

USTRUCT(BlueprintType)
struct FModioModfile
{
  GENERATED_BODY()

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  int32 Id;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  int32 ModId;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  int32 VirusStats;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  int32 VirusPositive;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  int32 DateAdded;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  int32 DateScanned;
  // TODO use int 64 instead of 32
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  int32 Filesize;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FString Filename;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FString Version;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FString VirustotalHash;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FString Changelog;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FString MetadataBlob;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FModioFilehash Filehash;
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "mod.io")
  FModioDownload Download;
};

extern void initializeModfile(FModioModfile &modfile, modio::Modfile modio_modfile);
extern void initializeModfileC(FModioModfile &modfile, ModioModfile modio_modfile);