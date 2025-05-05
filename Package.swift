// swift-tools-version:5.3

import Foundation
import PackageDescription

var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterUngrammar",
    products: [
        .library(name: "TreeSitterUngrammar", targets: ["TreeSitterUngrammar"]),
    ],
    dependencies: [
        .package(name: "SwiftTreeSitter", url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterUngrammar",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterUngrammarTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterUngrammar",
            ],
            path: "bindings/swift/TreeSitterUngrammarTests"
        )
    ],
    cLanguageStandard: .c11
)
