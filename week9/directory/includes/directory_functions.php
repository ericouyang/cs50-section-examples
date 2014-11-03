<?php

    /**
     * directory.php
     *
     * Computer Science 50
     * Week 9
     *
     * Eric Ouyang <eouyang@college.harvard.edu>
     * Frederick Widjaja <fwidjaja@college.harvard.edu>
     *
     * Functions to interact with the database
     */

    // configuration
    require("config.php");

    /**
     * Get all persons within the database
     *
     */
    function get_all_persons()
    {
        // TODO
        return array();
    }

    /**
     * Creates a person by saving the given data to the database
     *
     * Returns whether or not the person was successfully created
     */
    function create_person($name, $house, $age)
    {
        // TODO
        return false;
    }

    /**
     * Gets a person from the database by ID
     *
     * Returns false on error, else the row from the database
     */
    function get_person($id)
    {
        // TODO
        return false;
    }

    /**
     * Edits a person with a given ID
     */
    function edit_person($id, $name, $house, $age)
    {
        // TODO
        return false;
    }

    /**
     * Deletes a person from the database by ID
     */
    function delete_person($id)
    {
        // TODO
        return false;
    }
?>
