// swift-tools-version:4.0
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Csdjournal",
    
    providers: [
    	.apt(["libsystemd-dev"])
    ],
    
    products: [
    	.library(
    		name: "CSDJournal",
    		targets: ["CSDJournal"]
    	)
    ],
    
    targets: [
    	.target(name: "CSDJournal")
    ]
)
