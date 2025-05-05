package tree_sitter_ungrammar_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_ungrammar "github.com/tree-sitter-grammars/tree-sitter-ungrammar/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ungrammar.Language())
	if language == nil {
		t.Errorf("Error loading ungrammar grammar")
	}
}
