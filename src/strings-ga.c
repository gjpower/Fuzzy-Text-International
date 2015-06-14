#include "strings-ga.h"

const char* const HOURS_GA[] = {
  // AM hours
  "dó dhéag",
  "haon",
  "dó",
  "trí",
  "ceathair",
  "cúig",
  "sé",
  "seacht",
  "hocht",
  "naoi",
  "deich",
  "haon déag",

  // PM hours
  "dó dhéag",
  "haon",
  "dó",
  "trí",
  "ceathair",
  "cúig",
  "sé",
  "seacht",
  "hocht",
  "naoi",
  "deich",
  "haon déag"
};

/**
 * The string "$1" will be replaced with the current hour (e.g., "three"
 * at 3:45).  The string "$2" will be replaced with the *next* hour
 * (e.g., "four" at 3:45).
 *
 * A "*" character before a word makes that word bold.
 */
const char* const RELS_GA[] = {
  "*$1 a chlog",
  "cúig tar éis a *$1",
  "deich tar éis a *$1",
  "ceathrú tar éis a *$1",
  "fiche tar éis a *$1",
  "fiche is a cúig tar éis a *$1",
  "leath uair tar éis a *$1",
  "fiche is a cúig chun a *$2",
  "fiche chun a *$2",
  "ceathrú chun a *$2",
  "deich chun a *$2",
  "cúig chun a *$2"
};

