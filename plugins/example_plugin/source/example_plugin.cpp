#include <fenestra/plugin.hpp>
#include <fenestra/events/ui_events.hpp>

// This is the plugin entry point.
// The head of this construct contains the name of the plugin, the author, and a short description.
// The body of this construct contains the code that will be executed when the plugin is loaded.
FENESTRA_PLUGIN_SETUP("Example Plugin", "Author", "A simple example plugin") {
    // Print a log message to the console when the plugin is loaded
    fene::log::info("Hello World!");

    // Add some code that is executed at the start of each frame
    EventFrameBegin::subscribe([] {
        // Draw the ImGui Demo Window so there's something to play around with
        ImGui::ShowDemoWindow();
    });
}