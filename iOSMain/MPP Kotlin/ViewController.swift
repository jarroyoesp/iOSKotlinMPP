//
//  ViewController.swift
//  MPP Kotlin
//
//  Created by Javier Arroyo on 15/05/2019.
//  Copyright © 2019 Javier Arroyo. All rights reserved.
//

import UIKit
import greeting

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        let product = Factory().create(config: ["user": "Jetbrains"])
        print(product.description)
        
        let platform = Platform()
        print(platform.platform)
        
        let loc = Location(cityName:  "Zaragoza", country: "Spain")
        print(loc)
        
    
    }
    @IBOutlet weak var label: UILabel!


}

