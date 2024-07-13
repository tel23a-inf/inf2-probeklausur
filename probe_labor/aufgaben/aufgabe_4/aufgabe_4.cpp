/* AUFGABENSTELLUNG: Vervollständigen Sie die Funktion compare.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe_4.h"

bool same_elements(std::vector<int> a, std::vector<int> b) {
  if (a.size() != b.size()) {
    return false;
  }

  std::sort(a.begin(), a.end());
  std::sort(b.begin(), b.end());

  for (size_t i = 0; i < a.size(); i++) {
    if (a[i] != b[i]) {
      return false;
    }
  }
  return true;
}

TEST_CASE("leere_listen") {
  std::vector<int> a = {};
  std::vector<int> b = {};
  CHECK(same_elements(a, b));
}

TEST_CASE("unterschiedliche_laenge") {
  std::vector<int> a = {1, 2, 3};
  std::vector<int> b = {1, 2};
  CHECK(!same_elements(a, b));
}

TEST_CASE("gleiche_laenge_unterschiedliche_elemente") {
  std::vector<int> a = {1, 2, 3};
  std::vector<int> b = {4, 5, 6};
  CHECK(!same_elements(a, b));
}

TEST_CASE("gleiche_elemente_gleiche_reihenfolge") {
  std::vector<int> a = {1, 2, 3};
  std::vector<int> b = {1, 2, 3};
  CHECK(same_elements(a, b));
}

TEST_CASE("gleiche_elemente_unterschiedliche_reihenfolge") {
  std::vector<int> a = {1, 2, 3};
  std::vector<int> b = {3, 2, 1};
  CHECK(same_elements(a, b));
}
