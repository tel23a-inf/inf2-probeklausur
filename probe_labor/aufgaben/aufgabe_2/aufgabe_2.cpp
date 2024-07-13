/* AUFGABENSTELLUNG: Vervollständigen Sie die Methode Element::length.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe_2.h"

size_t Element::length() {
  if (is_empty()) {
    return 0;
  } else {
    return 1 + next->length();
  }
}

TEST_CASE("leere_liste") {
  Element e = {0, nullptr};
  CHECK(e.length() == 0);
}

TEST_CASE("einzelnes_element") {
  Element e2 = {0, nullptr};
  Element e1 = {0, &e2};
  CHECK(e1.length() == 1);
}

TEST_CASE("mehrere_elemente") {
  Element e3 = {0, nullptr};
  Element e2 = {0, &e3};
  Element e1 = {0, &e2};
  CHECK(e1.length() == 2);
}
