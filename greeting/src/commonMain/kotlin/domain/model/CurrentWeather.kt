package com.jarroyo.kotlinmultiplatform.domain.model

import kotlinx.serialization.Serializable
import kotlinx.serialization.Transient

@Serializable
data class CurrentWeather(
    val base: String,
    val clouds: Clouds?,
    val cod: Int,
    val coord: Coord?,
    val dt: Int,
    val id: Int,
    val main: Main?,
    val name: String,
    val sys: Sys?,
    val weather: MutableList<Weather>?,
    val wind: Wind?
){
    @Transient
    val rain: Rain? = null
}

@Serializable
data class Main(
    val humidity: Double,
    val pressure: Double,
    val temp: Double,
    val temp_max: Double,
    val temp_min: Double
)

@Serializable
data class Wind(
    val deg: Double,
    val speed: Double
)

@Serializable
data class Weather(
    val description: String,
    val icon: String,
    val id: Int,
    val main: String
)

@Serializable
data class Rain(
    val h: Int // Todo 3h
)

@Serializable
data class Sys(
    val country: String,
    val id: Int,
    val message: Double,
    val sunrise: Int,
    val sunset: Int,
    val type: Int
)

@Serializable
data class Clouds(
    val all: Int
)

@Serializable
data class Coord(
    val lat: Double,
    val lon: Double
)