package org.greeting

import kotlinx.serialization.Serializable

@Serializable
data class Location(var cityName: String = "", var country: String = "")