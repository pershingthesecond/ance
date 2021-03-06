add_executable(ance main.cpp)

add_subdirectory(ance)
add_subdirectory(compiler)
add_subdirectory(grammar)
add_subdirectory(management)

include_directories(ance)
include_directories(ance/assignable)
include_directories(ance/expression)
include_directories(ance/scope)
include_directories(ance/statement)
include_directories(ance/type)
include_directories(ance/utility)
include_directories(ance/construct)
include_directories(ance/construct/constant)
include_directories(ance/construct/value)

include_directories(compiler)
include_directories(grammar)

include_directories(management)
include_directories(management/grammar)
include_directories(management/elements)

set(LLD_AVAILABLE_LIBS lldCOFF;lldCommon;lldCore;lldDriver;lldELF;lldMachO;lldMachO2;lldMinGW;lldReaderWriter;lldWasm;lldYAML)
target_link_libraries(ance PRIVATE ${ANTLR4_LIB} ${LLVM_AVAILABLE_LIBS} ${LLD_AVAILABLE_LIBS})

target_compile_options(ance PRIVATE /EHa /MDd /W4)
set_source_files_properties(grammar/anceBaseVisitor.cpp
                            grammar/anceLexer.cpp
                            grammar/anceParser.cpp
                            grammar/anceVisitor.cpp
                            PROPERTIES COMPILE_FLAGS /W0)