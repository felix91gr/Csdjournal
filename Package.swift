// swift-tools-version:4.0
import PackageDescription

let package = Package(
    name: "Csdjournal",
    products: [
        .library(
            name: "Csdjournal",
            targets: ["Csdjournal"]),
    ],
    dependencies: [
    ],
    targets: [
        .target(
            name: "Csdjournal",
            dependencies: []),
    ],
    pkgConfig: "libsystemd"
)
