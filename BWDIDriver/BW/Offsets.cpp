#include "Offsets.h"


namespace BW
{
  TileID      *BWDATA_MapTileArray    = NULL;
  TileType    *BWDATA_TileSet         = NULL;
  SAI_Paths   *BWDATA_SAIPathing      = NULL;
  char        *BWDATA_StringTableOff  = NULL;
  ActiveTile  *BWDATA_ActiveTileArray = NULL;

  MiniTileMaps_type* BWDATA_MiniTileFlags = NULL;
  void (__stdcall *pOldDrawGameProc)(BW::bitmap *pSurface, BW::bounds *pBounds) = NULL;
  void (__stdcall *pOldDrawDialogProc)(BW::bitmap *pSurface, BW::bounds *pBounds) = NULL;

  const char *GetStatString(int index)
  {
    if ( BWDATA_StringTableOff )
      return (const char*)&BWDATA_StringTableOff[*(u16*)&BWDATA_StringTableOff[index * 2 + 2]];
    else
      return "Unable to initialize BWDATA_StringTableOff.";
  }

};
