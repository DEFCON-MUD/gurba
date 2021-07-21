inherit M_COMMAND;

string *usage(void) {
   string *lines;

   lines = ({ "Usage: add_base [-h] STATNAME" });
   lines += ({ " " });
   lines += ({ "Increase stat STATNAME by 1." });
   lines += ({ " " });
   lines += ({ "Options:" });
   lines += ({ "\t-h\tHelp, this usage message." });
   lines += ({ "Examples:" });
   lines += ({ "\tadd_base Strength" });

   lines += get_alsos();

   return lines;
}

void setup_alsos() {
   add_also("player", "score");

   add_also("wiz", "add_bonus");
   add_also("wiz", "stats");
}

static void main(string statname) {

   if (!alsos) {
      setup_alsos();
   }

   if (empty_str(statname)) {
      this_player()->more(usage());
      return;
   }

   if (sscanf(statname, "-%s", statname)) {
      this_player()->more(usage());
      return;
   }

   this_player()->add_base_stat(statname, 1);
   write("done!\n");
}
