/* AUFGABENSTELLUNG: Vervollständigen Sie die Funktion Element::values.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe_3.h"

std::vector<int> Element::values() {
  if (is_empty()) {
    return {};
  }
  std::vector<int> result = {value};
  for (auto v : next->values()) {
    result.push_back(v);
  }
  return result;
}

TEST_CASE("leere_liste") {
  Element e = {0, nullptr};
  CHECK(e.values() == std::vector<int>{});
}

TEST_CASE("einzelnes_element") {
  Element e2 = {0, nullptr};
  Element e1 = {42, &e2};
  CHECK(e1.values() == std::vector<int>{42});
}

TEST_CASE("mehrere_elemente") {
  Element e3 = {0, nullptr};
  Element e2 = {23, &e3};
  Element e1 = {42, &e2};
  CHECK(e1.values() == std::vector<int>{42, 23});
}
