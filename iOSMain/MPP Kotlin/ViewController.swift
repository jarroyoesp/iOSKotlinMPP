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
        
        WeatherApi().getCurrentWeather(
            success:
                { data in
                    print(data)
                    return KotlinUnit()
            },
            failure: {
                self.handleError($0?.message)
                return KotlinUnit()
            })
    
    }
    @IBOutlet weak var label: UILabel!
    
    internal func handleError(_ error: String?){
        print(error)
        let message = error ?? "An unknown error occurred. Retry?"
        let alert = UIAlertController(title: "Error", message: message, preferredStyle: .alert)
        
        alert.addAction(UIAlertAction(title: "Retry", style: .default, handler: { action in
            //self.loadList()
        }))
        alert.addAction(UIAlertAction(title: "Cancel", style: .cancel, handler: nil))
        
        self.present(alert, animated: true)
    }

}

