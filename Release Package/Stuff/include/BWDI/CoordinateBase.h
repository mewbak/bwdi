#pragma once

namespace BWDI
{
  namespace CoordinateBases
  {
    enum Enum
    {
      Screen = 1,
      Map    = 2,
      Mouse  = 3,
    };
  }
  typedef CoordinateBases::Enum CoordinateBase;
}
