/* AUFGABENSTELLUNG: Vervollständigen Sie die Funktion is_sorted_ascending.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe_1.h"

bool is_sorted_ascending(std::vector<int> const& v) {
  // TODO
  return true;
}

TEST_CASE("sortierte_liste") { CHECK(is_sorted_ascending({1, 2, 3, 4, 5})); }

TEST_CASE("unsortierte_liste") {
  CHECK_FALSE(is_sorted_ascending({1, 2, 3, 5, 4}));
}

TEST_CASE("leere_liste") { CHECK(is_sorted_ascending({})); }
