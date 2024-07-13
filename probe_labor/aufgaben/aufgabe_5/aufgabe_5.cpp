/* AUFGABENSTELLUNG: Vervollständigen Sie die Funktion Node::min_node.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe_5.h"

Node* Node::min_node() {
  if (is_empty()) {
    return nullptr;
  }
  if (left->is_empty()) {
    return this;
  }
  return left->min_node();
}

TEST_CASE("leerer_baum") {
  Node root;
  CHECK(root.min_node() == nullptr);
}

TEST_CASE("nur_wurzel") {
  Node root;
  root.insert(1, 2);
  CHECK(root.min_node() == &root);
}

TEST_CASE("zwei_linke_knoten") {
  Node root;
  root.insert(2, 3);  // Wurzel
  root.insert(1, 2);  // L
  root.insert(0, 1);  // LL (erwartet)
  CHECK(root.min_node() == root.left->left);
}

TEST_CASE("mehrere_knoten") {
  Node root;
  root.insert(20, 3);  // Wurzel
  root.insert(10, 2);  // L
  root.insert(30, 4);  // R
  root.insert(0, 1);   // LL (erwartet)
  root.insert(40, 5);  // RR
  root.insert(5, 6);   // LLR
  CHECK(root.min_node() == root.left->left);
}
