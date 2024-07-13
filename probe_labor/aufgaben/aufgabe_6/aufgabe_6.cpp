/* AUFGABENSTELLUNG: Vervollständigen Sie die Funktion Node::path.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe_6.h"

std::string Node::path(int key_) {
  // TODO
  return "X";
}

TEST_CASE("leerer_baum") {
  Node root;
  CHECK(root.path(42) == "X");
}

TEST_CASE("nicht_enthalten") {
  Node root;
  root.insert(42, 1);
  CHECK(root.path(1) == "X");
}

TEST_CASE("wurzel") {
  Node root;
  root.insert(42, 1);
  CHECK(root.path(42) == "");
}

TEST_CASE("linker_teilbaum") {
  Node root;
  root.insert(42, 1);  // Wurzel
  root.insert(21, 2);  // L
  root.insert(63, 3);  // R
  root.insert(10, 4);  // LL (erwartet)
  root.insert(84, 5);  // RR
  CHECK(root.path(10) == "LL");
}

TEST_CASE("rechter_teilbaum") {
  Node root;
  root.insert(42, 1);  // Wurzel
  root.insert(21, 2);  // L
  root.insert(63, 3);  // R
  root.insert(10, 4);  // LL
  root.insert(84, 5);  // RR (erwartet)
  CHECK(root.path(84) == "RR");
}
