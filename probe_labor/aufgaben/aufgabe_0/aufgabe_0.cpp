/* AUFGABENSTELLUNG: Vervollständigen Sie die Funktion Matrikelnummer.
 * ERREICHBARE PUNKTE: 1 (Bonuspunkt)
 */

#include "aufgabe_0.h"

std::string mtknr() {
  // Bitte ersetzen Sie die Zahl 1234567 durch Ihre Matrikelnummer.
  return "1234567";
}

TEST_CASE("mtknr_geaendert") { CHECK(mtknr() != "1234567"); }
