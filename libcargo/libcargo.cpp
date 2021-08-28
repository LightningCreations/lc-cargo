#include <package.hpp>

#include <iostream>

namespace lc_cargo{

    void print_diag_info(){
        std::cout << PACKAGE << " " << VERSION << " (Build Date: " << __DATE__ << ")\n"
            << "Cargo Version " << CARGO_VERSION << " (nightly features enabled)\n" 
            << "Default Target " << DEFAULT_TARGET << " (rustc target: " << DEFAULT_TARGET << ")\n"
            ;
    }
}