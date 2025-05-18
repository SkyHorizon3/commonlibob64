-- set minimum xmake version
set_xmakever("2.8.2")

-- set project
set_project("commonlibob64")
set_languages("c++23")
set_warnings("allextra")
set_encodings("utf-8")

-- add repositories
add_repositories("libxse-xrepo https://github.com/libxse/libxse-xrepo")

-- add rules
add_rules("mode.debug", "mode.releasedbg")

-- make custom rules available
includes("xmake-rules.lua")

-- define options
option("rex_ini", function()
    set_default(false)
    set_description("enable ini config support for REX")
end)

option("rex_json", function()
    set_default(false)
    set_description("enable json config support for REX")
end)

option("rex_toml", function()
    set_default(false)
    set_description("enable toml config support for REX")
end)

option("obse_xbyak", function()
    set_default(false)
    set_description("enable xbyak support for trampoline")
    add_defines("OBSE_SUPPORT_XBYAK=1")
end)

-- require packages
add_requires("commonlib-shared 75981b8181925dc09fdda11ac86ff6f6425e634f", { configs = {
    rex_ini = has_config("rex_ini"),
    rex_json = has_config("rex_json"),
    rex_toml = has_config("rex_toml"),
    xse_xbyak = has_config("obse_xbyak")
} })

-- define targets
target("commonlibob64", function()
    -- set target kind
    set_kind("static")

    -- set build by default
    set_default(os.scriptdir() == os.projectdir())

    -- set build group
    set_group("commonlibob64")

    -- add packages
    add_packages("commonlib-shared", { public = true })

    -- add options
    add_options("obse_xbyak", "rex_ini", "rex_json", "rex_toml", { public = true })

    -- add source files
    add_files("src/**.cpp")

    -- add header files
    add_includedirs("include", { public = true })
    add_headerfiles(
        "include/(OBSE/**.h)",
        "include/(RE/**.h)"
    )

    -- add extra files
    add_extrafiles("res/commonlibob64.natvis")

    -- set precompiled header
    set_pcxxheader("include/OBSE/Impl/PCH.h")

    -- add flags
    add_cxxflags("/EHsc", "/permissive-", { public = true })

    -- add flags (cl)
    add_cxxflags(
        "cl::/bigobj",
        "cl::/cgthreads8",
        "cl::/diagnostics:caret",
        "cl::/external:W0",
        "cl::/fp:contract",
        "cl::/fp:except-",
        "cl::/guard:cf-",
        "cl::/Zc:preprocessor",
        "cl::/Zc:templateScope"
    )

    -- add flags (cl: disable warnings)
    add_cxxflags(
        "cl::/wd4200", -- nonstandard extension used : zero-sized array in struct/union
        "cl::/wd4201", -- nonstandard extension used : nameless struct/union
        "cl::/wd4324", -- structure was padded due to alignment specifier
        { public = true }
    )

    -- add flags (cl: warnings -> errors)
    add_cxxflags(
        "cl::/we4715", -- not all control paths return a value
        { public = true }
    )
end)
