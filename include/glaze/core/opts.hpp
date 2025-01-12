// Glaze Library
// For the license information refer to glaze.hpp

#pragma once

#include "glaze/core/format.hpp"

namespace glz
{
   struct opts
   {
      // user configurable options
      uint32_t format = json;
      bool comments = false; // write out comments
      bool error_on_unknown_keys = true;
      
      // meant for internal use
      bool opening_handled = false; // is whitespace and the opening character handled
   };
   
   template <opts Opts>
   constexpr auto opening_handled()
   {
      opts ret = Opts;
      ret.opening_handled = true;
      return ret;
   };
}
