inherit "/std/room";
inherit "/domains/sci-fi/lib/hallway";
#include "../../domain.h" 

void setup( void ) {
  #include "area.h"

  set_property("x", -80);
  set_property("y", -10);
  set_property("z", 0);
  add_area( "center_sw" );

  set_short(do_short());
  set_long(do_long());

 set_exits( ([
  "south" : DIR+"/rooms/center_sw/x-80y-20z0.c",
  "east" : DIR+"/rooms/center_sw/x-70y-10z0.c",
  "west" : DIR+"/rooms/center_sw/x-90y-10z0.c"
  ]) );
}
