cmake_minimum_required(VERSION 3.29)
project(MyFenestraApplication)

set(CMAKE_CXX_STANDARD 20)

# Add the Fenestra CMake module
include(cmake/modules/Fenestra.cmake)

# Create a new Fenestra application
# To build the application now, build the 'fenestra_all' target.
# If you're working within an IDE, set the executable target to the 'main' target.
# Fenestra will load the version of the application from the VERSION file in the root of the project.
add_fenestra_app(
        # Replace this with the name of your application and your own name
        NAME   "MyFenestraApplication"
        AUTHOR "Application Author"

        # Set this to the path where Fenestra should look for your application's plugins
        PLUGIN_DIRECTORY
            "${CMAKE_CURRENT_SOURCE_DIR}/plugins"

        # Replace this with the version you want to use
        FENESTRA_VERSION
            "main"
)