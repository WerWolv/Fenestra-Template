project(example_plugin)

include(FenestraPlugin)

add_fenestra_plugin(
    NAME example_plugin
    SOURCES
        source/example_plugin.cpp
    INCLUDES
        include
)