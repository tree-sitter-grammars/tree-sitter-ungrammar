import XCTest
import SwiftTreeSitter
import TreeSitterUngrammar

final class TreeSitterUngrammarTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_ungrammar())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading ungrammar grammar")
    }
}
