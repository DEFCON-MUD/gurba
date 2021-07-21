inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Mike");
add_id("mike");
add_id("worker");
add_id("office");
add_id("officeworker");
  set_short( "Mike the office worker" );
  set_long( "This is an average office worker, he is wearing slacks and a button up shirt.  He appears to look very busy." );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
